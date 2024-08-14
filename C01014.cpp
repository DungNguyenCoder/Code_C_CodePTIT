#include <stdio.h>

typedef long long ll;

int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a == 0)
    {
        if(b == 0)
        {
            printf("Vo so nghiem");
        }
        else
        {
            printf("Vo nghiem");
        }
    }
    else
    {
        double x = (-1 * b) / a;
        printf("%.2lf",x);
    }
}