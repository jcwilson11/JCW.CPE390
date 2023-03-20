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

void bitmap::horiz_line(uint32_t x1, uint32_t x2, uint32_t y, uint32_t color) {
	//TODO: implement this
	for (uint32_t i = y * w + x1; i <= y * w + x2; i++) rgb[i] = color;
}


void bitmap::vert_line(uint32_t y1, uint32_t y2, uint32_t x, uint32_t color) {
	//TODO: implement this
	for (uint32_t i = y1 * w + x; i <= y2 * w + x; i += w) rgb[i] = color;
}

void bitmap::fill_rect(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh, uint32_t color) {
	uint32_t start_index = y0 * w + x0;
    uint32_t end_index = (y0 + rh) * w + x0 + rw;
    for (uint32_t i = start_index; i < end_index; i++) {
        rgb[i] = color;
    }
	//TODO: implement this  
}

void bitmap::rect(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh, uint32_t color) {
    horiz_line(x0, x0 + rw, y0, color);
    horiz_line(x0, x0 + rw, y0 + rh - 1, color);
    
    vert_line(y0, y0 + rh, x0, color);
    vert_line(y0, y0 + rh, x0 + rw - 1, color);
	//TODO: implement this  
}

void bitmap::grid(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh, uint32_t divx, uint32_t divy, uint32_t color) {
	float cellW = (float)rw / (float)divx;
    float cellH = (float)rh / (float)divy;
    
    for (uint32_t i = 0; i <= divy; i++) {
        uint32_t y = y0 + (uint32_t)(cellH*i);     //height 
        for (uint32_t j = 0; j < rw; j++) {
            uint32_t x = x0 + j;
            rgb[y*w + x] = color;
        }
    }
    
    for (uint32_t i = 0; i <= divx; i++) {
        uint32_t x = x0 + (uint32_t)(cellW*i);      //width
        for (uint32_t j = 0; j < rh; j++) {
            uint32_t y = y0 + j;
            rgb[y*w + x] = color;
        }
    }
	//TODO: implement this  
}


std::default_random_engine gen;

//https://stackoverflow.com/questions/22853349/how-to-generate-random-32bit-integers-in-c
void bitmap::random(uint32_t x0, uint32_t y0, uint32_t rw, uint32_t rh) {
		for (uint32_t y = y0; y < y0 + rh; y++) {
		for (uint32_t x = x0; x < x0 + rw; x++) {
		uint32_t color = gen(); //random 
		rgb[y*w + x] = color; 
		}
	}
	//TODO: implement this
}


void bitmap::circle(uint32_t x, uint32_t y, uint32_t d, uint32_t color) {
	uint32_t circx = x + (d/2);
    uint32_t circy = y + (d/2);
    uint32_t rsquared = (d/2)*(d/2);

    for (uint32_t i = 0; i < w; i++) {
        for (uint32_t j = 0; j < h; j++) {
            uint32_t distx = i - circx;
            uint32_t disty = j - circy;
            uint32_t distance = distx*distx + disty*disty;

            if (distance >= rsquared - (d/2) && distance <= rsquared + (d/2)) {
                rgb[j*w + i] = color; 
            }
        }
    }
	//TODO: implement this  
}

//https://stackoverflow.com/questions/1201200/fast-algorithm-for-drawing-filled-circles
void bitmap::fill_circle(uint32_t x0, uint32_t y0, uint32_t d, uint32_t color) {
	uint32_t circx = x0 + (d/2);
    uint32_t circy = y0 + (d/2);
    uint32_t rsquared = (d/2)*(d/2);

    for (uint32_t i = 0; i < w; i++) {
        for (uint32_t j = 0; j < h; j++) {
            uint32_t distx = i - circx;
            uint32_t disty = j - circy;
            uint32_t distance = distx*distx + disty*disty;

            if (distance <= rsquared) {
                rgb[j*w + i] = color; 
            }
        }
    }
	//TODO: implement this  
}

void bitmap::save(const char filename[]) {
	uint8_t*out;
	size_t s = WebPEncodeRGBA((uint8_t*)rgb, w, h, 4*w, 100, &out);
	ofstream f(filename, ios::binary);
	f.write((char*)out, s);
	WebPFree(out);
}
