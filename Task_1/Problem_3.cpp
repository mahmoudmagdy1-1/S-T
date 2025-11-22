class Solution
{
public:
    bool isPowerOfThree(int n, int x = 1)
    {
        if (n < 1)
            return 0;
        else if (n == 1)
            return 1;
        else if (n == pow(3, x))
            return 1;
        else if (n < pow(3, x))
            return 0;
        return isPowerOfThree(n, x + 1);
    }
};