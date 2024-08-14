#include <stdio.h>

typedef long long ll;

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ll res = 2*n*1ll;
        printf("%lld\n",res);
    }
}