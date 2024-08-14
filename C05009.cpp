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
    int n = input();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            f[i][j] = input();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < ceil((n*1.0)/2); j++)
        {
            if(i == j)
            {
                int tmp = f[i][j];
                f[i][j] = f[i][n - 1 - i];
                f[i][n - 1 - i] = tmp;
            }
            else if(j == n - 1 - i)
            {
                int tmp = f[i][j];
                f[i][j] = f[i][i];
                f[i][i] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ",f[i][j]);
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