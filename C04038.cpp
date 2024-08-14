#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       b[i] = a[i];
    }
    qsort(b,n,sizeof(int),cmp);
    int index = 0;
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = a[i];
        for (int j = i; j < n; j++)
        {
            if(a[j] < min)
            {
               index = j;
               min = a[j];
            }
        }
        int tmp = a[i];
        a[i] = a[index];
        a[index] = tmp;
        for (int k = 0; k < n; k++)
            printf("%d ",a[k]);
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

