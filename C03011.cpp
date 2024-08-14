#include<stdio.h>
#include<math.h>

typedef long long ll;


ll check (ll n)
{
    ll sum = 0;
    ll tmp = n;
    while(n)
    {
        ll gt = 1;
        for (ll i = 1; i <= n % 10; i++)
            gt *= i;
        sum += gt;
        n /= 10;
    }
    if (tmp == sum)
        return 1;
    return 0;
}

int main()
{
    ll a,b;
    scanf("%lld%lld",&a,&b);
    if (a > b)
    {
        ll tmp = a;
        a = b;
        b = tmp;
    }
    for (ll i = a; i <= b; i++)
    {
        if(check(i))
            printf("%lld ",i);
    }
}   