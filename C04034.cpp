#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long ll;
#define mx 1000005

int f[mx];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i] > max)
            {
                ++f[a[i]];
                max = a[i];
            }
        }
        for (int i = mx - 1; i >= 0; i--)
        {
            if(f[i])
            {
                printf("%d ",i);
                f[i] = 0;
            }
        }
        printf("\n");
    }
}