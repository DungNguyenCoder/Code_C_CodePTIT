#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (ll n)
{
    if(n % 2)
        return 0;
    while(n)
    {
        if((n % 10) % 2)
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}