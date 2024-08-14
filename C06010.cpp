#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long

char s[505];

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(s);
        int check = 1;
        for (int i = 0; i < strlen(s) / 2; i++)
        {
            if((s[i] % 2 || s[strlen(s) - 1 - i] % 2) || (s[i] != s[strlen(s) - 1 - i]))
            {
                check = 0;
                break;
            }
        }
        if(check)
            printf("YES\n");
        else
            printf("NO\n");
    }
}