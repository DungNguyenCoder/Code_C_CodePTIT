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

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

void solution()
{
    int n = input();
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = input();
        b[i] = a[i];
    }
    qsort(b,n,sizeof(int),cmp);
    int buoc = 0;
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];
        while(pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
        printf("Buoc %d: ",buoc);
        buoc++;
        for (int j = 0; j < buoc; j++)
        {
            printf("%d ",a[j]); 
        }
        int dem = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == b[i])
                ++dem;
        }
        if(dem == n)
            break;
        printf("\n");
    }
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