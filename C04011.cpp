#include <stdio.h>
#include <math.h>

typedef long long ll;

int f[105];

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
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]] > 1)
            {
                printf("%d ",a[i]);
                f[a[i]] = 0;
                check = 0;
            }
        }
        if (check)  printf("0");
    }
}