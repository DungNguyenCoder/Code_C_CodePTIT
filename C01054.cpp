#include <stdio.h>
#include <math.h>

typedef long long ll;

int MillerRabin(long long n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return 1;
    if (n < 11)
        return 0;

    long long k = 0, m = n - 1;
    while (m % 2 == 0)
    {
        m /= 2;
        k++;
    }
    static vector<int> checkSet = {2,3,5,7,11,13,17,19,23,29,31,37};
    for (auto a : checkSet)
        if (!test(a, n, k, m))
            return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    int SUM = 0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            while(n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if(n != 1)
            sum += n;
        SUM += sum;
    }
    printf("%d",SUM);
}