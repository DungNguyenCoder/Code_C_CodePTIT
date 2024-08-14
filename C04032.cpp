#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

struct NUM
{
    char so[1000];
    int f;
};
typedef struct NUM num;

num a[10000];

int check(char s[])
{
    int n = strlen(s);
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] > s[i+1])
            return 0;
    }
    return 1;
}

int cmp(const void *a, const void *b)
{
    num *x = (num*)a;
    num *y = (num*)b;
    return y->f - x->f;
}

void solution()
{
    char s[1000];
    int n = 0;
    while(scanf("%s",s) != -1)
    {   
        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            int tmp = strcmp(a[i].so,s);
            if(tmp == 0)
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
        {
            num new_num;
            strcpy(new_num.so,s);
            new_num.f = 1;
            a[n] = new_num;
            ++n;
        }
        else
        {
            a[idx].f += 1;
        }
    }
    qsort(a,n,sizeof(num),cmp);
    for(int i = 0; i < n; i++)
    {
        if(check(a[i].so))
            printf("%s %d\n",a[i].so,a[i].f);
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