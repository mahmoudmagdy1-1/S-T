#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int curr, prev = -1, isPerf = 0;
        cin >> n;
        while (n--)
        {
            cin >> curr;
            if (prev > 0)
            {
                if (abs(prev - curr) != 5 && abs(prev - curr) != 7)
                    isPerf++;
            }
            prev = curr;
        }
        if (isPerf > 0)
            cout << "no\n";
        else
            cout << "yes\n";
    }
}