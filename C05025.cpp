#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

void solution()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        printf("Test %d:\n",i);
        int n,m;
        int a[n+5][m+5];
        scanf("%d%d",&n,&m);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                scanf("%d",&a[i][j]);
        for(int i1 = 0; i1 < n; i1++)
        {
            for(int j1 = 0; j1 < m; j1++)
            {
                for(int i2 = i1; i2 < n; i2++)
                {
                    for(int j2 = j1; j2 < m; j2++)
                    {
                        if(a[i1][j1] > a[i2][j2])
                        {
                            int tmp = a[i1][j1];
                            a[i1][j1] = a[i2][j2];
                            a[i2][j2] = tmp;
                        }
                    }
                }
                printf("%d ",a[i1][j1]);
            }
            printf("\n");
        }
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