#include <stdio.h>
#include <math.h>

typedef long long ll;


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
        }
        for (int i = 0; i < n/2; i++)
        {
            int tmp = a[i];
            a[i] = a[n - 1 - i];
            a[n - 1 - i] = tmp;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
    }
}