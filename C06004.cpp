#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long

int main()
{
    char c[205];
    fgets(c,205,stdin);
    c[strlen(c) - 1] = NULL;
    int cntchu = 0, cntso = 0, cntkhac = 0;
    for (int i = 0; i < strlen(c); i++)
    {
        if(isalpha(c[i]))
            ++cntchu;
        else if(isdigit(c[i]))
            ++cntso;
        else
            ++cntkhac;
    }
    printf("%d %d %d",cntchu,cntso,cntkhac);
}