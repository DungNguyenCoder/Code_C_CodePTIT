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
    char b[100005];
    char s[100005];
    scanf("%s",s);
    int n = strlen(s);
    int p = 0;
    char c = 'a';
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] >= c)
        {
            c = s[i];
            b[p++] = c;
        }
    }
    for(int i = p-1; i >= 0; i--)
    {
        printf("%c", b[i]);
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