#pragma once

#include "shape.hh"

class pipe : public shape { // a pipe is_a shape
private:
    double t; // wall thickness
    double r; // outer radius
    double H; // height
    uint32_t num_sides; // number of sides of the octagon

    // number of concentric rings of plastic to create one layer
    uint32_t num_concentric_layers; 
public:
    pipe(double t, double r, double H, uint32_t num_sides, uint32_t num_concentric_layers);
    void draw_layer(std::ostream& gc,
                    double x, double y,
                    double layer_thickness, double z) const override;    
    double height() const override;
};

pipe::pipe(double t, double r, double H, uint32_t num_sides, uint32_t num_concentric_layers) :
    t(t), r(r), H(H), num_sides(num_sides), num_concentric_layers(num_concentric_layers) {
}

void pipe::draw_layer(std::ostream& gc,
                      double x, double y,
                      double layer_thickness, double z) const {
    //TODO: jump from current point to nearest angle on octagon. For now angle = 0
    double ang = 0;
    double da = 2 * 3.14 / num_sides; // angle increment for an octagon
    double r = this->r;
    for (uint32_t concentric = 0; concentric < num_concentric_layers; concentric++) {
        for (uint32_t s = 0; s < num_sides; s++, ang += da)
            squirt_toxy(gc, x + r * cos(ang), y + r * sin(ang));
        r += layer_thickness;
    }
}

double pipe::height() const {
    return H;
}
