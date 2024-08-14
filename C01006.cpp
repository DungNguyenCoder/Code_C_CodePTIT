#include <stdio.h>

typedef long long ll;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b == 0)
    {
        printf("0");
    }
    else
    {
        printf("%d %d %d %.2lf %d",a+b, a-b, a*b, (1.0*a)/b,a%b);
    }
}