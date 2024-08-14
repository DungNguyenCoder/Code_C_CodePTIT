#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

char s[1005];
char cnt[10];

void solution()
{
    fgets(s,1005,stdin);
    s[strlen(s) - 1] = NULL;
    int n = strlen(s);
    int check = 0;
    if(s[0] == '0')
    {
        printf("INVALID\n");
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(s[i] < '0' || s[i] > '9')
        {
            check = 1;
            break;
        }
        cnt[s[i]] = 1;
    }
    if(check)
    {
        printf("INVALID\n");
        return;
    }
    int check1 = 0;
    char c = '0';
    for(int i = 0; i < 10; i++)
    {
        if(cnt[c] == 0)
        {
            check1 = 1;
            break;
        }
        ++c;
    }
    for(int i = 0; i < 10; i++)
    {
        char c = '0';
        cnt[c] = 0;
        ++c;
    }
    if(check1)
        printf("NO\n");
    else
        printf("YES\n");
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

