#include <iostream>
using namespace std;

int main() {
    /*
    int index = 1;
    while(index <=5) {
        cout << index << endl;
        index++;
    }
    */

    //For Loops are basically shorter versions of the while loop example on top
    //the first part is initializing a variable, second is specficing the "looping guard"
    //or "looping condition". Third is the code that will run after the end of each 
    //code
    for(int i = 10; i > 0; i--) {
        cout << i << endl;
    }

    return 0;
}