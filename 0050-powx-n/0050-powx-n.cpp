class Solution {
public:
double myPow2(double x, int n)
{
    if (n == 0)
        return 1.0;

    if (n % 2 == 0)
        return myPow2(x * x, n / 2);
    else
        return myPow2(x * x, n / 2) * x;
}

double myPow(double x, int n)
{
    if (x == 0 || x == 1)
        return x;
    if (n == 0)
        return 1.0;
    if (x == -1)
    {
        return n % 2 == 0 ? 1.0 : -1.0;
    }
    if (n < 0)
    {
        x = 1 / x;
    }
    return myPow2(x, n);
}
};