#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int min = 10000000;
    if(min > a) min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    printf("%d",min);
}