#include <stdio.h>
#include <math.h>

typedef long long ll;


int main()
{
    // int t;
    // scanf("%d",&t);
    // while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],b[m];
        int c[n + m];
        int p;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d",&b[i]);
        }
        scanf("%d",&p);
        for (int i = 0; i < p; i++)
        {
            c[i]= a[i];
        }
        for (int i = 0; i < m; i++)
        {
            c[i + p] = b[i];
        }
        for (int i = p; i < n; i++)
        {
            c[m + i] = a[i];
        }
        for (int i = 0; i < m + n; i++)
            printf("%d ",c[i]);
    }
}