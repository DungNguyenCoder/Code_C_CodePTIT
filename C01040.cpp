#include<stdio.h>
#include<math.h>

typedef long long ll;

int nt (ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    ll n;
    scanf("%lld",&n);
    int cnt = 0;
    for (ll i = 2; i <= 32; i++)
    {
        if (1ll * pow(2,i-1) * (pow(2,i) - 1) == n)
        {
            if (nt(i))
            {
                ++cnt;
                break;
            }
        }
    }
    if (cnt)    printf("1");
    else    printf("0");
}