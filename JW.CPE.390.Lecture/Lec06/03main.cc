#include <iostream> 
using namespace std;

extern "C" uint64_t f3 (uint64_t a[], uint64_t len);
int main() {
    constexpr uint32_t n = 1024*1024*1024;
    //uint64_t ×[n];

    uint64_t* x = new uint64_t[1024*1024];
    f3(x, n);

delete [] x;
}