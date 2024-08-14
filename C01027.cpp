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

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",ucln(a,b));
    }
}