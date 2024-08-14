#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gcd(ll a, ll b)
{
    if(a == 0 || b == 0)    return a + b;
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm (ll a, ll b)
{
    return (1.0*a) / gcd(a,b) * b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        if(n > m)
        {
            int tmp = n;
            n = m;
            m = tmp;
        }
        ll tmp; 
        ll res;
        if(m - n < 2)
        {
            res = lcm(1ll*n,1ll*m);
            printf("%lld\n",res);
            continue;
        }
        res = lcm(1ll*n,1ll*n + 1);
        for (int i = n + 2; i <= m; i++)
        {
            tmp = lcm(1ll*i, res);
            res = tmp;
        }
        printf("%lld\n",res);
    }
}