#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

char s[mx];

void solution()
{
    fgets(s,mx,stdin);
    s[strlen(s) - 1] = NULL;
    int k = strlen(s);
    for(int i = 0; i < k; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    char c[105][105];
    int n = 0;
    char *token = strtok(s," ");
    while(token != NULL)
    {
        strcpy(c[n], token);
        ++n;
        token = strtok(NULL," ");
    }
    int b[n];
    for(int i = 0; i < n; i++)
        b[i] = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] == 0)
        {
            int cnt = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(strcmp(c[i],c[j]) == 0)
                {
                    ++cnt;
                    b[j] = 1;
                }
            }
            printf("%s %d\n",c[i],cnt);
        }
    }
}

int main()
{
    int t;
    if(CHECK)   scanf("%d",&t);
    else    t = 1;
    while(t--)
    {
        solution();
    }
}