#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 0;

struct RES
{
    int a;
    int b;
};
typedef struct RES res;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

res a[105];

int cmp(const void *m, const void *n)
{
    res *x = (res*)m;
    res *y = (res*)n;
    if(x -> a > y -> a)
        return 1;
    return -1;
}

void solution()
{
    int n = input();
    for(int i = 0; i < n; i++)
    {
        a[i].a = input();
        a[i].b = input();
    }
    qsort(a,n,sizeof(res),cmp);
    int start = a[0].a + a[0].b;
    for(int i = 1; i < n; i++)
    {
        if(a[i].a > start)
        {
            start = a[i].a + a[i].b;
        }
        else
        {
            start += a[i].b;
        }
    }
    printf("%d",start);
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