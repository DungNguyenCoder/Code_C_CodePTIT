#include <stdio.h>
#include <math.h>

typedef long long ll;

ll res (ll n)
{
    ll cnt = 0;
    while (n >= 2)
    {
        cnt += n / 2;
        n /= 2;
    }
    return cnt;
}

int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    if(res(n) >= k) printf("Yes");
    else    printf("No");
}
