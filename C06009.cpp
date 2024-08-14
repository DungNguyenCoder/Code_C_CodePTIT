#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

char s[20];

int BangNhauAll (char s[])
{
    int sodau = s[6];
    for(int i = 6; i < 12; i++)
    {
        if(i == 9)
            continue;
        if(s[i] != sodau)
            return 0;
    }
    return 1;
}

int BangNhauNua (char s[])
{
    if(s[6] != s[7] || s[6] != s[8])
        return 0;
    if(s[10] != s[11])
        return 0;
    return 1;
}

int LocPhat (char s[])
{
    for(int i = 6; i < 12; i++)
    {
        if(i == 9)
            continue;
        if(s[i] != '6' && s[i] != '8')
            return 0;
    }
    return 1;
}

int TangChat (char s[])
{
    if(s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11])
        return 1;
    return 0;
}

void solution()
{
    fgets(s,20,stdin);
    int n = strlen(s);
    s[n - 1] = NULL;
    n = strlen(s);
    if(BangNhauAll(s) || BangNhauNua(s) || LocPhat(s) || TangChat(s))
        printf("YES\n");
    else
        printf("NO\n");
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
