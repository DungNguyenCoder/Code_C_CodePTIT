#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int b[m][n];
    for (int i = 0 ; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&b[j][i]);
        }
    }
    for (int i = 0 ; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}