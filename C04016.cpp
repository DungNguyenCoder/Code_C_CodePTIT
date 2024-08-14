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
            if(nt(a[i]))
                ++f[a[i]];
        }
        printf("Test %d:\n",cnt);
        for (int i = 0; i < mx; i++)
        {
            if(f[i])
            {
                printf("%d xuat hien %d lan\n",i,f[i]);
                f[i] = 0;
            }
        }
        ++cnt;
    }
}