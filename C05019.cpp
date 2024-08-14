#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 1000000

int CHECK = 1;
ll prime[mx];
ll nt[mx];

void sieve()
{
    for(int i = 0; i < mx; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    int moc = sqrt(mx);
    for(int i = 2; i < moc; i++)
    {
        if(prime[i])
        {
            for(int j = i * i; j < mx; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

void gan()
{
    int cnt = 0;
    for(int i = 0; i < mx; i++)
    {
        if(prime[i] == 1)
        {
            nt[cnt] = i;
            ++cnt;
        }
    }
}

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int a[105][105];

void solution()
{
    int n = input();
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int cnt = 0;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; i++)
        {
            a[h1][i] = nt[cnt];
            ++cnt;
        }
        ++h1;
        for(int i = h1; i <= h2; i++)
        {
            a[i][c2] = nt[cnt];
            ++cnt;
        }
        --c2;
        for(int i = c2; i >= c1; i--)
        {
            a[h2][i] = nt[cnt];
            ++cnt;
        }
        --h2;
        for(int i = h2; i >= h1; i--)
        {
            a[i][c1] = nt[cnt];
            ++cnt;
        }
        ++c1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

int main()
{
    sieve();
    gan();
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    int dem = 1;
    while(t--)
    {
        printf("Test %d:\n",dem);
        ++dem;
        solution();
    }
}