#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

char s1[1000005];
char s2[1000005];
char c[1005][1005];

int cmp(const void *a, const void *b)
{
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x,y);
}

void solution()
{
    gets(s1);
    gets(s2);
    char a[1005][1005];
    int n1 = 0;
    char *token1 = strtok(s1," ");
    while(token1 != NULL)
    {
        strcpy(a[n1],token1);
        ++n1;
        token1 = strtok(NULL," ");
    }
    char b[1005][1005];
    int n2 = 0;
    char *token2 = strtok(s2," ");
    while(token2 != NULL)
    {
        strcpy(b[n2],token2);
        ++n2;
        token2 = strtok(NULL," ");
    }
    int cnt = 0;
    for(int i = 0; i < n1; i++)
    {
        int ok = 0;
        for(int j = 0; j < n2; j++)
        {
            if(strcmp(a[i],b[j]) == 0)
            {
                ok = 1;
                // printf("1");
                break;
            }
        }
        if(!ok)
        {
            strcpy(c[cnt],a[i]);
            ++cnt;
        }
    }
    qsort(c,cnt,sizeof(c[0]),cmp);
    // printf("%d",cnt);
    for(int i = 0; i < cnt; i++)
    {
        if(i == 0)
            printf("%s ",c[i]);
        else
        {
            if(strcmp(c[i],c[i-1]) != 0)
                printf("%s ",c[i]);
        }
    }
    printf("\n");
    // printf("%d %d",n1,n2);
    // for(int i = 0; i < n1; i++)
    // {
    //     printf("%s\n",a[i]);
    // }
    // printf("\n");
    // for(int i = 0; i < n2; i++)
    // {
    //     printf("%s\n",b[i]);
    // }
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