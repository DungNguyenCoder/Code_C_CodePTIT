#include <stdio.h>
#include <math.h>

typedef long long ll;

ll f[92];

void fibo()
{
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i < 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main()
{
    fibo();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",f[n - 1]);
    }
}