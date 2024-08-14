#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int cnt = 1;
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int b[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Test %d:\n",cnt);
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        ++cnt;
    }
}