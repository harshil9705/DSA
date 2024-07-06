#include <iostream>

using namespace std;

int main()
{

    int n = 234;

    int pro = 1, sum = 0;

    while (n != 0)
    {
        int number = n % 10;
        pro = pro * number;
        sum = sum + number;
        n = n / 10;
    }

    int answer = pro - sum;
    cout << answer;

    // return answer;

    return 0;
}