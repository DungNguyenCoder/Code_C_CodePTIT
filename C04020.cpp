#include <stdio.h>
#include <math.h>

typedef long long ll;
#define mx 100005

void leftrotate(int a[], int n)
{
    int x = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = x;
}

int main()
{
    // int t;
    // scanf("%d",&t);
    // while(t--)
    {
        int n,k;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        k %= n;
        for (int i = 1; i <= k; i++)
        {
            leftrotate(a,n);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
    }
}