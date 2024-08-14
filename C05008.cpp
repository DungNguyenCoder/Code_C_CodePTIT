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

int f[55][55];

void solution(int dem)
{
    int m = input();
    int n = input();
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    int sumngang = 0;
    int sumdoc = 0;
    int maxsumngang = -1, maxsumdoc = -1;
    int mocngang = -1, mocdoc = -1;
    for(int i = 0; i < m; i++)
    {
        sumngang = 0;
        for(int j = 0; j < n; j++)
        {
            sumngang += f[i][j];
        }
        if(sumngang > maxsumngang)
        {
            maxsumngang = sumngang;
            mocngang = i;
        }
    }
    for(int i = 0; i < n; i++)
    {
        sumdoc = 0;
        for(int j = 0; j < m; j++)
        {
            if(j != mocngang)
                sumdoc += f[j][i];
        }
        if(sumdoc > maxsumdoc)
        {
            maxsumdoc = sumdoc;
            mocdoc = i;
        }
    }
    printf("Test %d:\n",dem);
    int check = 0;
    for(int i = 0; i < m; i++)
    {
        check = 0;
        for(int j = 0; j < n; j++)
        {
            if(i != mocngang && j != mocdoc)
            {
                printf("%d ",f[i][j]);
                check = 1;
            }
        }
        if(check)
            printf("\n");
    }
}

int main()
{
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    int dem = 1;
    while(t--)
    {
        solution(dem);
        ++dem;
    }
}