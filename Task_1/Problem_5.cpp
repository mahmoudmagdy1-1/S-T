#include <iostream>
using namespace std;

int cnt = 0;

int nplusthree(int n)
{
    if (n == 1)
    {
        cnt++;
        return 0;
    }
    if (n % 2 == 0)
        nplusthree(n / 2), cnt++;
    else if (n % 2 != 0)
        nplusthree(3 * n + 1), cnt++;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    nplusthree(n);
    cout << cnt;
}