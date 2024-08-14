#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

char s[1005];

void solution()
{
    fgets(s,1005,stdin);
    s[strlen(s) - 1] = NULL;
    int n = strlen(s);
    int cntchan = 0;
    int cntle = 0;
    int check = 0;
    if(s[0] == '0')
    {
        printf("INVALID\n");
        return;
    }
    for(int i = 0; i < n; i++)
    {
        char a = s[i];
        if(s[i] < '0' || s[i] > '9')
        {
            check = 1;
            break;
        }
        if(a == '0' || a == '2' || a == '4' || a == '6' || a == '8')
            ++cntchan;
        if(a == '1' || a == '3' || a == '5' || a == '7' || a == '9')
            ++cntle;
    }
    if(check)
        printf("INVALID\n");
    else
    {
        if(n % 2 == 0 && cntchan > cntle)
            printf("YES\n");
        else if(n % 2 && cntle > cntchan)
            printf("YES\n");
        else
            printf("NO\n");
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

