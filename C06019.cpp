#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

char s[1000];
char c[100][100];

void solution()
{
    fgets(s,1000,stdin);
    s[strlen(s) - 1] = NULL;
    int n = strlen(s);
    int k = 0;
    char *token = strtok(s," ");
    while(token != NULL)
    { 
        strcpy(c[k],token);
        ++k;
        token = strtok(NULL," ");
    }
    for(int i = 0; i < 50; i++)
    {
        c[k - 1][i] = tolower(c[k - 1][i]);
    }
    for(int i = 0; i < k - 1; i++)
    {
        c[i][0] = tolower(c[i][0]);
        printf("%c",c[i][0]);
    }
    printf("%s",c[k - 1]);
    printf("@ptit.edu.vn");
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