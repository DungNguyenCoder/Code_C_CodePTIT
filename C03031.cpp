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
    int a,b,c,d;
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if (ucln(a,b) == ucln(c,d))
        {
            printf("YES\n");
        }
        else    printf("NO\n");
    }
 
}