#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

char a[100][100];

void swap(int n, int m)
{
    for(int i = n; i >= 1; i--)
        for(int j = m; j >= 1; j--)
            a[i][j] = 1 - a[i][j];
}

void solution()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    char x;
    for(int i = 1; i <= n; i++)
    {
        getchar();
        for(int j = 1; j <= n; j++)
        {
            scanf("%c",&x);
            a[i][j] = x - '0';
        }
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j >= 1; j--)
        {
            if(a[i][j] == 1)
            {
                swap(i,j);
                ++sum;
            }
        }
    }
    printf("%d",sum);
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