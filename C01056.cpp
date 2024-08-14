#include <stdio.h>
#include <math.h>

typedef long long ll;

int kg (ll n)
{
    if (n < 10)
        return 1;
    else
    {
        
        while(n)
        {
            int a = n % 10;
            int b = (n % 100 - a) / 10;
            if(a < b)
                return 0;
            int r = a;
            a = b;
            b = r;
            n /= 10;
        }
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
        if(kg(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
 
}