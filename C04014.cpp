#include <stdio.h>
#include <math.h>

typedef long long ll;
#define mx 100005

int f[mx];

int main()
{
    int t;
    scanf("%d",&t);
    int cnt = 1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            ++f[a[i]];
        }
        printf("Test %d:\n",cnt);
        for (int i = 0; i < n; i++)
        {
            if(f[a[i]])
            {
                printf("%d xuat hien %d lan\n",a[i],f[a[i]]);
                f[a[i]] = 0;
            }
        }
        ++cnt;
    }
}