#include <iostream>
using namespace std;

int main() {

    int numberGrid[3][2] = { //First bracket is the number of element arrays, the second is the number of elements in each array
        {1, 2}, //position 0,0 is 1, position 0,1 is 2
        {3, 4}, //position 1,0 is 3, position 1,1 is 4
        {5, 6}  //position 2,0 is 5, position 2,1 is 6
    };

    cout << numberGrid[0][0] << endl; //This is the first element in the first array
    cout << numberGrid[2][1] << endl; //This is the second element in the third array
    cout << endl;
    cout << endl;

    //This is a nested loop; This example is for a 2D array
    for(int i = 0; i < 3; i++) { //This is the number of arrays
        for(int j = 0; j < 2; j++) { //This is the number of elements in each array
            cout << numberGrid[i][j];
        }

        
        cout << endl;
        }
    return 0;
}