#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1

void solution()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+5][m+5];
    char x;
    for(int i = 1; i <= n; i++)
    {
        getchar();
        for(int j = 1; j <= m; j++)
        {
            scanf("%c",&x);
            a[i][j] = x - '0';
        }
    }
    int cnt = 0;
    for(int i1 = 1; i1 < n; i1++)
    {
        for(int j1 = 1; j1 <= m; j1++)
        {
            if(a[i1][j1])
            {
                for(int i2 = i1+1; i2 <= n; i2++)
                {
                    for(int j2 = 1; j2 <= m; j2++)
                    {
                        if(a[i1][j2] != 0 && a[i1][j1] == a[i2][j2] && a[i1][j2] != a[i1][j1])
                        {
                            ++cnt;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",cnt);
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