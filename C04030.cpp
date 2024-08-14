#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long ll;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int cmp1(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}

int cmp2(const void * a,const void * b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    int t = input();
    int cnt = 1;
    while(t--)
    {
        int n = input();
        int b[n], c[n];
        for (int i = 0; i < n; i++)	scanf("%d",&b[i]);
        for (int i = 0; i < n; i++)	scanf("%d",&c[i]);
        qsort(b,n,sizeof(int),cmp1);
        qsort(c,n,sizeof(int),cmp2);
        int j= 0, k = 0;
        printf("Test %d:\n",cnt);
        // for(int i = 0; i < n; i++)
        //     printf("%d ",b[i]);
        // printf("\n");
        // for(int i = 0; i < n; i++)
        //     printf("%d ",c[i]);
        // printf("\n");
        for(int i = 0; i < 2*n; i++)
        {
            if(i % 2 == 0)
            {
                printf("%d ",b[j]);
                ++j;
            }
            else
            {
                printf("%d ",c[k]);
                ++k;
            }
        }
        printf("\n");
        ++cnt;
    }
}