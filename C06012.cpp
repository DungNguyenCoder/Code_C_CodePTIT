#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

char s[505];

int nt(char s)
{
    if (s == '2' || s == '3' || s == '5' || s == '7')
        return 0;
    return 1;
}

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
            if(nt(s[i]) || (s[i] != s[strlen(s) - 1 - i]))
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
