#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long ll;
#define mx 1000005

int f[mx];

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        ++f[a[i]];
    }
    for (int i = 0; i < n; i++)
    {
        if(f[a[i]])
        {
            printf("%d ",a[i]);
            f[a[i]] = 0;
        }
    }
}