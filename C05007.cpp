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

int f[55][55];

void solution()
{
    int m = input();
    int n = input();
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    int a = input(), b = input();
    --a;
    --b;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == a)
            {
                printf("%d ",f[i][b]);
            }
            else if(j == b)
            {
                printf("%d ",f[i][a]);
            }
            else
                printf("%d ",f[i][j]);
        }
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