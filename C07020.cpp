#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

struct POKEMON
{
    char ten[10005];
    int k;
    int m;
    int capdo;
};
typedef struct POKEMON pokemon;

pokemon a[100];

void solution()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        scanf("%s",a[i].ten);
        scanf("%d%d",&a[i].k,&a[i].m);
        a[i].capdo = 0;
        while(a[i].m >= a[i].k)
        {
            ++a[i].capdo;
            a[i].m -= a[i].k;
            a[i].m += 2;
        }
        if(max < a[i].capdo)
            max = a[i].capdo;
        sum += a[i].capdo;
    }
    printf("%d\n",sum);
    for(int i = 0; i < n; i++)
    {
        if(a[i].capdo == max)
        {
            printf("%s",a[i].ten);
            return 0;
        }
    }
    // for(int i = 0; i < n; i++)
    // {
    //     // if(a[i].capdo == max)
    //         printf("%s %d\n",a[i].ten,a[i].capdo);
    // }
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