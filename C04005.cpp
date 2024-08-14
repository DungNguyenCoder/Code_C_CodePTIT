#include <stdio.h>
#include <math.h>

typedef long long ll;

int tick[105];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] > max)
            {
                max = a[i];
            }
        }
        printf("%d\n",max);
        for (int i = 0; i < n; i++)
        {
            if(a[i] == max)
                tick[i] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            if(tick[i])
                printf("%d ",i);
            tick[i] = 0;
        }
        printf("\n");
    }
}