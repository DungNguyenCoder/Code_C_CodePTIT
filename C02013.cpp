#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n - m; i++)
    {
        for (int j = n - i + 1; j >= n - m + 1 - i + 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
           if (j <= m - i + 1)
            {
                printf("%d",m - i + 1 - j + 1);
            }
            else
            {
                printf("%d",i + j - m);
            } 
        }
        printf("\n");
        if (i >= n)
            break;
    }
}