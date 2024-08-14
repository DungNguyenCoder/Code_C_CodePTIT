#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

char s[505];

ll sum(char s[])
{
    ll tong = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        tong += s[i] - '0';
    }
    return tong;
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
        if(s[strlen(s) - 1] != '8')
        {
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < strlen(s) / 2; i++)
        {
            if(sum(s) % 10 || (s[i] != s[strlen(s) - 1 - i]))
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
