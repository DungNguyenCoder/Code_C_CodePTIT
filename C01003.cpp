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
        ll res = 1ll*n*n;
        printf("%lld\n",res);
    }
}