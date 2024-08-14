#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1

int nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            return 0;
    return n > 1;
}

int check(char s[])
{
    int n = strlen(s);
    int t = n;
    while(t--)
    {
        char x = s[0];
        for(int i = 0; i < n-1; i++)
        {
            s[i] = s[i+1];
        }
        s[n-1] = x;
        int a = 0;
        for(int i = 0; i < n; i++)
        {
            a = a*10 + (s[i]-'0');
        }
        if(!nt(a))
            return 0;
    }
    return 1;
}

void solution()
{
    char s[1005];
    scanf("%s",s);
    printf("%d ",check(s));
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