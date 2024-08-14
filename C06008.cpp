#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long

char s[105];

int main()
{
    gets(s);
    char a[105][105];
    int n = 0;
    char *token = strtok(s," ");
    while(token != NULL)
    {
        strcpy(a[n],token);
        ++n;
        token = strtok(NULL," ");
    }
    for (int i = 0; i < n; i++)
    {
        int check = 1;
        for (int j = 0; j < i; j++)
        {
            if (strcmp(a[i],a[j]) == 0)
            {
                check = 0;
                break;
            }
        }
        if(check)
        {
            printf("%s",a[i]);
            if(i != n - 1)
                printf(" ");
        }
    }
}