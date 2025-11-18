#include <iostream>
using namespace std;

int main()
{
    long long x, y, sumAll = 0, sumEven = 0, sumOdd = 0;
    cin >> x >> y;
    long long a = max(x, y), b = min(x, y);
    for (int i = a; i >= b; i--)
    {
        sumAll += i;
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }
    cout << sumAll << endl
         << sumEven << endl
         << sumOdd;
}