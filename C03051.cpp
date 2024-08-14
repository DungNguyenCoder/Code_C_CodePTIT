#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ll cnt = 0;
        for (ll i = ceil(sqrt(l)); i <= sqrt(r); i++)
        {
            if(nt(i))
                ++cnt;
        }
        printf("%lld\n",cnt);
    }
}