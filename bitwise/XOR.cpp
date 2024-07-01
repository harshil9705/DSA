#include<iostream>
using namespace std;

/**
 * calculation of XOR (~)
 * 
 * **if both are 1 then answer is 0 
 *   if any one is 1 then answer is 1 
 *  
 * 6    4  | and
 * --------|----
 * 1    1  |  0
 * 1    0  |  1
 * 0    0  |  0
 */

int main(){
    int a = 6;
    int b = 4;

    cout << "a~b" << " " << (a^b); // 2

    return 0;
}