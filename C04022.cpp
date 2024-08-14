#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    // int t;
    // scanf("%d",&t);
    // int cnt = 1;
    // while(t--)
    {
        int n;
        scanf("%d",&n);
        int max = -2;
        int secmax = -1;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] > max)
                max = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > secmax && a[i] != max)
            {
                secmax = a[i];
            }
        }
        printf("%d %d",max,secmax);
    }
}