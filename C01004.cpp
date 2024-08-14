#include <stdio.h>

typedef long long ll;

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        double res = 1/(1.0*n);
        printf("%.15lf\n",res);
    }
}