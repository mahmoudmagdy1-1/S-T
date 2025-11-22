#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    double x = sqrt(n);
    cout << ((int)x == (double)x ? "YES" : "NO");
}