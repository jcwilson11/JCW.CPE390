#Review Quiz One

Question One:
```cpp
uint64_t sumsq(uint32_t a, uint32_t b) {
    for (uint32_t i = a; i <= b; i++) {
        unint64_t sum = 0;  
        sum += i * i;
        return sum;
    }
}

Question Two:
```cpp
uint8_t a = 255 + 3; //a = 2
uint16_t b = 3-5; //b = 65533
uint32_t c = 7 / 2 ; //c = 3
uint64_t d = 7 % 2; //d = 1
//if (n % 2 == 0) //n is even
uint64_t e = 3 / 2 * 4; //e = 4
uint64_t f = 3.0 / 2 * 4; //f = 6   

Question Three:

```cpp
  for (uint64_t i = 5; i <= 11; i++)
    cout << i << ' '; // 5 6 7 8 9 10 11 

  for (uint64_t i = 1; i <= 30; i*=2)
    cout << i << ' '; // 1 2 4 8 16 


```cpp
uint8_t a = 255 + 3; // a=2
/*
421  
000    0    0
001    1    1
010    2    2
011    3    3
100    4   -4
101    5   -3
110    6   -2
111    7   -1

7+1 = 0
-1 +1 = 0
-3 * 3 = 
5 * 3 = 


    999
    + 1
    000
*/