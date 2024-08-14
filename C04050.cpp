#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 0;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int a[105], b[105];
int giao[105], hieu1[105], hieu2[105];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

void solution()
{
    int n = input();
    int m = input();
    int i1, i2;
    int check1, check2;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
        check1 = 1;
        scanf("%d",&i1);
        for(int j = 0; j < i; j++)
        {
            if(a[j] == i1)
            {
                check1 = 0;
                break;
            }
        }
        if(check1)
        {
            a[cnt1] = i1;
            ++cnt1;
        }
    }
    for(int i = 0; i < m; i++)
    {
        check2 = 1;
        scanf("%d",&i2);
        for(int j = 0; j < i; j++)
        {
            if(b[j] == i2)
            {
                check2 = 0;
                break;
            }
        }
        if(check2)
        {
            b[cnt2] = i2;
            ++cnt2;
        }
    }
    qsort(a,cnt1,sizeof(int),cmp);
    qsort(b,cnt2,sizeof(int),cmp);
    int cntgiao = 0, cnthieu1 = 0, cnthieu2 = 0;
    int check3 = 0, check4 = 0;
    for(int i = 0; i < cnt1; i++)
    {
        check3 = 0;
        for(int j = 0; j < cnt2; j++)
        {
            if(a[i] == b[j])
            {
                giao[cntgiao] = a[i];
                ++cntgiao;
            }
            if(a[i] != b[j])
            {
                ++check3;
            }
            if(check3 == cnt2)
            {
                hieu1[cnthieu1] = a[i];
                ++cnthieu1;
            }
        }
    }
    for(int i = 0; i < cnt2; i++)
    {
        check4 = 0;
        for(int j = 0; j < cnt1; j++)
        {
           if(b[i] != a[j])
            {
                ++check4;
            }
            if(check4 == cnt1)
            {
                hieu2[cnthieu2] = b[i];
                ++cnthieu2;
            } 
        }
    }
    for(int i = 0; i < cntgiao; i++)
        printf("%d ",giao[i]);
    printf("\n");
    for(int i = 0; i < cnthieu1; i++)
        printf("%d ",hieu1[i]);
    printf("\n");
    for(int i = 0; i < cnthieu2; i++)
        printf("%d ",hieu2[i]);

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