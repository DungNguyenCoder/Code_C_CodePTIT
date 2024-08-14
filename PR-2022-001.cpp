#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

void solution()
{
    ll u,d,n;
    scanf("%lld%lld%lld",&u,&d,&n);
    ll sum = 0;
    ll res = u;
    for(ll i = 1; i <= n; i++)
    {
        sum += res;
        res += d;
        // printf("%lld\n",sum);
    }
    printf("%lld",sum);
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}