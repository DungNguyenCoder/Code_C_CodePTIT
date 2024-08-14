#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1

struct CV
{
    char kitu;
    double so;
};
typedef struct CV cv;

cv a[1000000];

int cmp(const void *a, const void *b)
{
    cv *x = (cv*)a;
    cv *y = (cv*)b;
    if(x->so != y->so)
    {
        if(x->so > y->so)
            return 1;
        else
            return -1;
    }
    else
        return x->kitu - y->kitu;
}

void solution()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        getchar();
        scanf("%c",&a[i].kitu);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i].so);
    }
    // for(int i = 0; i < n; i++)
    // {
    //     printf("%c %lf\n",a[i].kitu,a[i].so);
    // }
    qsort(a,n,sizeof(cv),cmp);
    for(int i = 0; i < n; i++)
        printf("%c ",a[i].kitu);
    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%.3lf ",a[i].so);
    printf("\n");    
    int cnt = n-1;
    double ans = a[0].so;
    int tmp = 1;
    while(cnt--)
    {
        for(int j = 0; j <= tmp; j++)
            printf("%c",a[j].kitu);
        for(int k = tmp+1; k < n; k++)
            printf(" %c",a[k].kitu);
        ans += a[tmp].so;
        printf("\n");
        printf("%.3lf ",ans);
        for(int i = tmp+1; i < n; i++)
            printf("%.3lf ",a[i].so);
        ++tmp;
        printf("\n");
    }
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