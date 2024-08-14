#include <stdio.h>

typedef long long ll;

int main()
{
    int n;
    scanf("%d",&n);
    int y = n / 365;
    int w = (n - y*365) / 7;
    int d = n - y*365 - w*7;
    printf("%d %d %d",y,w,d);
}