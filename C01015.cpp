#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a == 0)
    {
        if(b == 0)
        {
            printf("NO");
        }
        else
        {
            double x = (-1*c) / b;
            printf("%.2lf",x);
        }
    }
    else
    {
        double denta = (b*b - 4*a*c);
        if(denta < 0)
            printf("NO");
        else if(denta == 0)
        {
            double x = (-1*b) / (2*a);
            printf("%.2lf",x);
        }
        else
        {
            double x1 = (-1*b + sqrt(denta)) / (2*a);
            double x2 = (-1*b - sqrt(denta)) / (2*a);
            printf("%.2lf %.2lf",x1,x2);
        }
    }
}