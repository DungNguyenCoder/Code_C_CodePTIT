#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 0;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

void solution()
{
    int n = input();
    int a,b;
    int min1 = 10000000, min2 = 10000000;
    while(n--)
    {
        a = input();
        if(a < min1)    min1 = a;
        b = input();
        if(b < min2)    min2 = b;
    }
    ll res =1ll * min1 * min2;
    printf("%lld",res);    
}

int main()
{
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    while(t--)
    {
        solution();
    }
}