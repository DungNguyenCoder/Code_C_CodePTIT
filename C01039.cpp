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
    printf("%d",cnt(n));
}