#include <stdio.h>
#include <math.h>

typedef long long ll;
#define mx 100005

int f[mx];

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

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
            if(nt(a[i]))
                ++f[a[i]];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]])
            {
                ++cnt;
            }
        }
        printf("%d ",cnt);
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]])
            {
                printf("%d ",a[i]);
                f[i] = 0;
            }
        }
    }
}