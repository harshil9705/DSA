#include <iostream>
using namespace std;

/**
 * calculation of NOT (~)
 *
 * ** not is convert 1 into 0 and convert 0 into 1
 *
 *  16   | and
 *  -----|----
 *  1    |  0
 *  1    |  0
 *  0    |  1
 *  1    |  0
 */

int main()
{
    int a = 5;

    cout << "~a" << " " << (~a);

    return 0;
}