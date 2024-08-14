#include <stdio.h>
#include <math.h>

typedef long long ll;

int ucln (int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll bcnn (int a, int b)
{
    return (1ll*a*b) / ucln(a,b);
}

int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%lld",ucln(a,b),bcnn(a,b));
}