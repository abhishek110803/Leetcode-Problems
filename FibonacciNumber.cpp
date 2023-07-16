class Solution
{
public:
    int fib(int n)
    {

        int t0 = 0, t1 = 1, t2 = 1;
        if (n == 0)
        {
            return t0;
        }
        else if (n == 1)
        {
            return t1;
        }
        
        else
        {

            for (int i = 2; i <= n; i++)
            {
                t2 = t1 + t0;
                t0 = t1;
                t1 = t2;
            }
        }

        return t2;
    }
};