#include <stdio.h>
#include <math.h>

typedef long long ll;

int cnt (int n)
{
    int dem = 0;
    while(n)
    {
        ++dem;
        n /= 10;
    }
    return dem;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int cuoi = n % 10;
        int dau = (n / (int)pow(10,cnt(n) - 1));
        if (dau == cuoi)
            printf("YES\n");
        else
            printf("NO\n");
    }
}