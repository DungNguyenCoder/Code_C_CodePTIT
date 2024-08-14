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

int nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

void solution()
{
    int n = input();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            f[i][j] = input();
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(nt(f[i][j]))
                sum += f[i][j];
        }
    }
    printf("%d",sum);
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