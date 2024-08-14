#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long

char s1[205];
char s2[205];

int main()
{
    gets(s1);
    scanf("%s",s2);
    char a[205][205];
    char *word = strtok(s1," ");
    int n = 0;
    while(word != NULL)
    {
        if (strcmp(word,s2) != 0)
        {
            strcpy(a[n],word);
            ++n;
        }
        
        word = strtok(NULL," ");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s",a[i]);
        if(i != n - 1)
            printf(" ");
    }
}