#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    ll n;
    scanf("%lld",&n);
    ll mul = 1;
    while(n)
    {
        mul *= n % 10;
        n /= 10;
    }
    printf("%lld",mul);
}