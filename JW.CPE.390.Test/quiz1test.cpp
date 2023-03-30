#include iostream
using namespace std;

void sumx5(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i*i*i*i*i;
    }
    return sum;
}

int msin () {
    uint64_t s = sumx5(4,7);
    cout << s << endl;
}