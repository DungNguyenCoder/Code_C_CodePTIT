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

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

void solution()
{
    int n = input();
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)
    {
        a[i] = input();
        b[i] = a[i];
    }
    int cnt = 1;
    qsort(b,n,sizeof(cnt),cmp);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf("Buoc %d: ",cnt);
        ++cnt;
        for(int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        int dem = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i])
                ++dem;
        }
        if(dem == n)
            break;
        printf("\n");
    }
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