#include "pipe.hh"
#include <numbers>
#include <cmath>
using namespace std;
using namespace std::numbers;

void pipe::draw_layer(ostream& gc,
											double x, double y,
											double layer_thickness, double z) const {
	//TODO: jump from current point to nearest angle on circle. For now angle = 0
	double ang = 0;
	double da = 2 * pi / 8; //change number of facets to 8
	double r = this->r;
	for (uint32_t concentric = 0; concentric < num_concentric_layers; concentric++) {
		for (uint32_t f = 0; f < 8; f++, ang += da) //use 8 instead of facets
			squirt_toxy(gc, x + r * cos(ang), y + r * sin(ang)); // first time (r,0)
		r += layer_thickness;
	}
}

double pipe::height() const {
	return H;
}
