#include <stdio.h>
#include <math.h>

typedef long long ll;

int cntc (int n)
{
    int dem = 0;
    while (n)
    {
        if(n % 2 == 0)
            ++dem;
        n /= 10;
    }
    return dem;
}

int cntl (int n)
{
    int dem = 0;
    while (n)
    {
        if(n % 2)
            ++dem;
        n /= 10;
    }
    return dem;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        printf("%d %d\n",cntl(n),cntc(n));
    }
}