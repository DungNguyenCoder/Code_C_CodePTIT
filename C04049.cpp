#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1

int gcd(int a, int b)
{
    if(a == 0 || b == 0)
        return a + b;
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

void solution()
{
    int n;
    scanf("%d",&n);
    int a[n+5], b[n+5];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    b[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        b[i] = lcm(a[i-1],a[i]);
    }
    b[n] = a[n-1];
    for(int i = 0; i <= n; i++)
        printf("%d ",b[i]);
    printf("\n");
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}