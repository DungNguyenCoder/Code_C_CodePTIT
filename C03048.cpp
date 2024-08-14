#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (ll n)
{
    int cntchan = 0, cntle = 0;
    while(n)
    {
        int a = n % 10;
        if(a % 2)
            ++cntle;
        else
            ++cntchan;
        n /= 10;
    }
    return cntchan > cntle;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(check(n))   printf("YES\n");
        else    printf("NO\n");
    }
}