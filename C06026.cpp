#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

struct WORD
{
    char tu[1005];
    int f;
};
typedef struct WORD word;

int check(char s[])
{
    int n = strlen(s);
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-1-i])
            return 0;
    }
    return 1;
}

word a[1005];

void solution()
{
    char s[1005];
    int n = 0;
    int k = 0;
    while(scanf("%s",s) != -1)
    {
        int idx = -1;
        for(int i = 0; i < n; i++)
        {
            if(strcmp(s,a[i].tu) == 0)
            {
                idx = i;
                break;
            }
        }
        if(idx == -1)
        {
            word new_word;
            strcpy(new_word.tu,s);
            new_word.f = 1;
            a[n] = new_word;
            ++n;
        }
        else
        {
            a[idx].f += 1;
        }
    }
    // for(int i = 0; i < n; i++)
    //     printf("%s %d\n",a[i].tu, a[i].f);
    int MAX = -1;
    for(int i = 0; i < n; i++)
    {
        if(check(a[i].tu))
        {
            int k = strlen(a[i].tu);
            // printf("%d\n",strlen(a[i].tu));
            if(MAX < k)
                MAX = k;
        }
    }
    // printf("%d",MAX);
    for(int i = 0; i < n; i++)
    {
        if(check(a[i].tu) && strlen(a[i].tu) == MAX)
            printf("%s %d\n",a[i].tu,a[i].f);
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