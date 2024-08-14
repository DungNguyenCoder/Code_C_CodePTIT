#include <stdio.h>
#include <math.h>

typedef long long ll;

int a[10];

int main()
{
    int n;
    scanf("%d",&n);
    int cnt = 0;
    while(n)
    {
        a[cnt] = n % 2;
        ++cnt;
        n /= 2;
    }
    ll res = 0;
    for (int i = 9; i >= 0; i--)
    {
        res = res*10 + 1ll*a[i];
    }
    printf("%lld",res);
}