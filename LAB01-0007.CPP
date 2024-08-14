#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n;
    scanf("%d",&n);
    double res = 0;
    int a;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        res += a*1.0;
    }
    res /= n;
    printf("%.3lf",res);
}