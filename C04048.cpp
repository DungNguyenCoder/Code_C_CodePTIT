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

int b[10000];

void solution()
{
    int n = input();
    int m = input();
    int k = input();
    int a[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
        int ans = a[i] - 1;
        b[ans] = 1;
        int tmp1 = k + ans;
        int tmp2 = ans - k;
        if(k + ans >= n)
            tmp1 = n - 1;
        if(ans - k < 0)
            tmp2 = 0;
        for(int j = ans; j <= tmp1; j++)
        {
            b[j] = 1;
        }
        for(int j = ans; j >= tmp2; j--)
        {
            b[j] = 1;
        }
    }
    int cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {  
        int cp;      
        if(b[i] == 0)
        {
            cp = i - k;
            ++cnt;
        }
        int tam1 = cp - k;
        if(tam1 < 0)
            tam1 = 0;
        int tam2 = cp + k;
        if(tam2 >= n)
            tam2 = n - 1;
        for(int j = tam1; j <= tam2; j++)
        {
            b[j] = 1;
        }
    }
    // for(int i = 0; i < n; i++)
    //     printf("%d ",b[i]);
    printf("%d",cnt);
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