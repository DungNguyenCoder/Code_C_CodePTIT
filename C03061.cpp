#include <stdio.h>
#include <math.h>

typedef long long ll;

ll tn (ll n)
{
    ll tmp = n;
    ll rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    } 
    return rev == tmp;
}

int cnt(ll n)
{
    int dem = 0;
    while(n)
    {
        ++dem;
        n /= 10;
    }
    return dem;
}

int check (ll n)
{
    ll last = n % 10;
    ll first = n / pow(10,cnt(n) - 1);
    ll tmp = (n - last - first*pow(10,cnt(n)-1)) / 10;
    if((last == 2 * first || first == 2 * last) && tn(tmp))
        return 1;
    return 0;
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