#include <iostream>
#include <iomanip>
#include <cmath>
#include <bitset>
using namespace std;

//Write a compression function that reads in an array of numbers a where each number is from 0 to 3 (2 bits). Compress into a single 64-bit word (you can fit 32 numbers in one word), then write out to output. For example, if you have 65 numbers in a, then you should write out 3 numbers into output, the first two are full, and the last one has only a single value. 
uint64_t compress(const uint32_t in[], uint32_t len, uint64_t out[]) {
    uint64_t out_len = 0;
    uint64_t temp = 0;
    for (int i = 0; i < len; i++) {
        temp = temp | (in[i] << (i % 32) * 2);
        if (i % 32 == 31) {
            out[out_len] = temp;
            out_len++;
            temp = 0;
        }
    }
    if (len % 32 != 0) {
        out[out_len] = temp;
        out_len++;
    }
    return out_len;
}

uint64_t arithmeticCompress(const uint32_t in[], uint32_t len, uint32_t base) {
    uint64_t out = 0;
    for (int i = 0; i < len; i++) {
        out = out + in[i] * pow(base, len - i - 1);
    }
    return out;
}

int main(){
    cout << "Question 1-----------------------------------" << endl;
	uint32_t a[65];
    uint64_t out[3] = {0,0,0};
    for (int i = 0; i < 65; i++) {
        a[i] = i % 4;
    }
							
	uint64_t out_len = compress(a, 65, out);
	for (uint32_t i = 0; i < out_len; i++) {
		cout << bitset<64>(out[i]) << '\t';
		cout << '\n';
	}
	

    cout << "Question 2-----------------------------------" << endl;
    uint32_t in[] = {22, 5, 19, 12, 6, 18, 2, 14, 10, 0, 9, 15, 17, 20};
    uint64_t ans = arithmeticCompress(in, 14, 23);
    cout << ans << '\n' << endl;

    return 0;
}