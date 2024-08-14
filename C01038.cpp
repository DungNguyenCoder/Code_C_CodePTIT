#include <stdio.h>
#include <math.h>

typedef long long ll;

int cnt (int n)
{
    int dem = 0;
    while (n)
    {
        ++dem;
        n /= 10;
    }
    return dem;
}
int main()
{
    ll n;
    scanf("%lld",&n);
    if (n < 10)
        printf("&lld",n);
    else
    {
        ll dau = n / (1ll*pow(10,cnt(n) - 1));
        ll cuoi = n % 10;
        n = n - dau*pow(10,cnt(n)-1) - cuoi + cuoi*pow(10,cnt(n)-1) + dau;
        printf("%lld",n);
    }
}