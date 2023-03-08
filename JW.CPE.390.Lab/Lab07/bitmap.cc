#include <fstream>
#include "bitmap.hh"
#include <webp/decode.h>
#include <webp/encode.h>
#include <random>

using namespace std;
/*

	AUTHOR: Joris Wilson and John Shea
	CITE: cite any sources you used other than the ones given
	"I pledge my honor that I have abided by the Stevens Honor System."
*/

/*
	In order to compile you will need to install libwebp, a new graphics
	standard from google. Most image programs won't yet work with webp,
	which is better compression than jpeg in general.

	In order to install under msys2: 
	https://packages.msys2.org/package/mingw-w64-x86_64-libwebp

	In order to access a particular element of this bitmap (x,y) use the
	following equation point(x,y) does this

	y*w + x

	this works because the first point is 0*w+0 = 0, the second would be 0*w+1

	one row down would be 1*w + 0
 */


bitmap::bitmap(uint32_t w, uint32_t h, uint32_t color) : w(w), h(h), rgb(new uint32_t[w*h]) {
	for (uint32_t i = 0; i < w*h; i++)
		rgb[i] = color;
}

bitmap::~bitmap() {
	delete [] rgb;
}

void bitmap::clear(uint32_t color) {
	for (uint32_t i = 0; i < w*h; i++)
		rgb[i] = color;
}
/*
void bitmap::horiz_line(uint32_t x1, uint32_t x2, uint32_t y, uint32_t color) {
	//TODO: implement this
	for (uint32_t i = y * w + x1; i <= y * w + x2; i++) rgb[i] = color;
}
*/

void bitmap::vert_line(uint32_t y1, uint32_t y2, uint32_t x, uint32_t color) {
	//TODO: implement this
	for (uint32_t i = x * h + y1; i <= x * h + y2; i++) rgb[i] = color;

}

void bitmap::fill_rect(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh, uint32_t color) {
	//TODO: implement this  
}

void bitmap::rect(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh, uint32_t color) {
	//TODO: implement this  
}

void bitmap::grid(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh,
									uint32_t divx, uint32_t divy, uint32_t color) {
	//TODO: implement this  
}


std::default_random_engine gen;

//https://stackoverflow.com/questions/22853349/how-to-generate-random-32bit-integers-in-c
void bitmap::random(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh) {
	//TODO: implement this
}


void bitmap::circle(uint32_t x, uint32_t y, uint32_t d, uint32_t color) {
	//TODO: implement this  
}

//https://stackoverflow.com/questions/1201200/fast-algorithm-for-drawing-filled-circles
void bitmap::fill_circle(uint32_t x0, uint32_t y0, uint32_t d, uint32_t color) {
	//TODO: implement this  
}

void bitmap::save(const char filename[]) {
	uint8_t*out;
	size_t s = WebPEncodeRGBA((uint8_t*)rgb, w, h, 4*w, 100, &out);
	ofstream f(filename, ios::binary);
	f.write((char*)out, s);
	WebPFree(out);
}
