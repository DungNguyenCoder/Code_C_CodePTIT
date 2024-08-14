#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    int cnt = 0;
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
        ++cnt;
        printf("Buoc %d: ",cnt);
        for (int k = 0; k < n; k++)
            printf("%d ",a[k]);
        printf("\n");
    }
}

