#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 1;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int a[205];

void solution()
{
    int i = 0;
    int n;
    do
    {
        n = input();
        a[i] = n;
        ++i;
        if (getchar() == '\n')	break; 
    }   while(1);
    int m = i;
    int cntchan = 0;
    int cntle = 0;
    for(int i = 0; i < m; i++)
    {
        if(a[i] % 2 == 0)
            ++cntchan;
        else
            ++cntle;
    }
    if(m % 2 == 0 && cntchan > cntle)   printf("YES\n");
    else if(m % 2 && cntchan < cntle)   printf("YES\n");
    else    printf("NO\n");
}

int main()
{
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    while(t--)
    {
        solution();
    }
}