#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    ll a,b;
    scanf("%lld%lld",&a,&b);
    ll sum = 0;
    if(a > b)
    {
        ll t = a;
        a = b;
        b = t;
    }
    for (int i = a; i <= b; i++)
        sum += i;
    printf("%lld",sum);
}