#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

char s[1000];
char c[105][105];

void solution()
{
    fgets(s,1000,stdin);
    s[strlen(s) - 1] = NULL;
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    int k = 0;
    char *token = strtok(s," ");
    while(token != NULL)
    {
        strcpy(c[k],token);
        ++k;
        token = strtok(NULL," ");
    }
    for(int i = 0; i < 105; i++)
    {
        c[i][0] = toupper(c[i][0]);
    }
    for(int i = 0; i < k; i++)
    {
        printf("%s",c[i]);
        if(i < k - 1)
            printf(" ");
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 105; j++)
        {
            c[i][j] = 0;
        }
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

