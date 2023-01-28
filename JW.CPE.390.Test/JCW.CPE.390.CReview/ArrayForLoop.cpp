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

    int num [] = {1, 2, 5, 7, 3};
    for(int i = 0; i < 5; i++) {
        cout << num[i] << endl;
    }

    return 0;
}