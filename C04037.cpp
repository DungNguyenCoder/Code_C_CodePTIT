#include <stdio.h>
#include <math.h>

typedef long long ll;
#define mx 1000005

int f[mx];

int main()
{
    // int t;
    // scanf("%d",&t);
    // while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            ++f[a[i]];
        }
        int cnt = 0;
        for (int i = 0; i < mx; i++)
        {
            if(f[i] > 1)
                ++cnt;
        }
        printf("%d\n",cnt);
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]] > 1)
            {
                printf("%d ",a[i]);
                f[a[i]] = 0;
            }
        }
    }
}