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

int a[35][35];

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
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = input();
        }
    }
    int check = 0;
    int first = -1;
    int moc = -1;
    for(int i = 0; i < n; i++)
    {
        check = 0;
        for(int j = 0; j < n; j++)
        {
            if(nt(a[i][j]))
                ++check;
        }
        if(check > first)
        {
            first = check;
            moc = i;
        }
    }
    printf("%d\n",moc + 1);
    for(int j = 0; j < n; j++)
    {
        if(nt(a[moc][j]))
            printf("%d ",a[moc][j]);
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