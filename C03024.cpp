#include <stdio.h>
#include <math.h>

typedef long long ll;

int sum(int n)
{
    int tong = 0;
    while(n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (sum(a) > sum(b))
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    printf("%d %d",a,b);
}