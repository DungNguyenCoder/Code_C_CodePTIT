#include <stdio.h>
#include <math.h>

typedef long long ll;

int a[10];

int nt(ll n)
{
    if(n == 2 || n == 3 || n == 5 || n == 7)
        return 1;
    return 0;
}

ll tn(ll n)
{
    ll rev = 0;
    while(n)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return rev;
}

int main()
{
    ll n;
    scanf("%lld",&n);
    ll rev = tn(n);
    while(n)
    {
        int b = n % 10;
        if(nt(b))
            ++a[b];
        n /= 10;
    }
    while(rev)
    {
        int b = rev % 10;
        if(a[b])
        {
            printf("%d %d\n",b,a[b]);
            a[b] = 0;
        }
        rev /= 10;
    }
}