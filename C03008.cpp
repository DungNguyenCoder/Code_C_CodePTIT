#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return n > 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    int cnt = 0;
    for (int j = 6; j <= n; j++)
    {
        for (int i = 2; i <= 32; i++)
        {
            if (1ll * pow(2,i-1) * (pow(2,i) - 1) == 1ll*j)
            {
                if (nt(i))
                {
                    printf("%d ",j);
                    break;
                }
            }
        }
    }
   
}