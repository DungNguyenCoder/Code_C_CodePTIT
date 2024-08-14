#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

char s[1005];
int a[10], b[10];

int check()
{
    for(int i = 1; i <= 3; i++)
    {
        if(a[i] != b[i])
            return 0;
    }
    if(a[4]%2 != 0 || b[4]%2 != 0)
        return 0;
    return 1;
}

void solution()
{
    scanf("%s",s);
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        char c = s[i];
        if(c == '(')
            ++a[1];
        else if(c == ')')
            ++b[1];
        else if(c == '[')
            ++b[2];
        else if(c == ']')
            ++b[2];
        else if(c == '{')
            ++b[3];
        else if(c == '}')
            ++b[3];
        else if(c == '"')
            ++a[4];
        else
            ++b[4];
    }
    if(check())
        printf("1");
    else
        printf("0");
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