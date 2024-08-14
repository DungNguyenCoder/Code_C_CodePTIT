#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long

int main()
{
    int t;
    scanf("%d",&t);
    char c[200];
    getchar();
    while(t--)
    {
        fgets(c,200,stdin);
        c[strlen(c) - 1] = NULL;
        int cnt = 0;
        char *token = strtok(c," ");
        while(token != NULL)
        {
            ++cnt;
            token = strtok(NULL," ");
        }
        // if(c[strlen(c) - 1] == ' ');
        //     --cnt;
        printf("%d\n",cnt);
    }
}