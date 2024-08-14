#include <stdio.h>
#include <math.h>

typedef long long ll;

ll split(ll n)
{
    ll num = n;
    ll i = 0;
    while(n)
    {
        ll a = n % 10;
        ll tmp = a;
        if(a == 0)    a = 0;
        else if(a == 1) a = 1;
        else if(a == 8) a = 0;
        else if(a == 9) a = 0;
        else
            return 0;
        num = num - tmp*pow(10,i) + a*pow(10,i);
        ++i;
        n /= 10;
    }
    if (num == 0)
        return 0;
    return num;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(split(n) == 0)  printf("INVALID\n");
        else
            printf("%lld\n",split(n));
    }
}