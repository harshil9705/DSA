#include<iostream>
using namespace std;

/**
 * calculation of AND(&)
 * 
 * **if any any one is 0 then answer is 0 
 *   if pair of 1 then answer is 1 
 *  
 * 16   4  | and
 * --------|----
 * 1    0  |  0
 * 1    1  |  1
 * 0    1  |  0
 * 1    1  |  1
 */

int main(){
    int a = 16;
    int b = 11;

    cout << "a&b" << " " << (a&b);

    return 0;
}