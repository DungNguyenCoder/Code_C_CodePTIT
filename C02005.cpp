#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf("~");
        }
        for (int j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}