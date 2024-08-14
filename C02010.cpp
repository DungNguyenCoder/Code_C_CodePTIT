#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i <= m)
            {
                if (j <= m - i + 1)
                {
                    printf("%d",j + i - 1);
                }
                else
                {
                    printf("%d",m - j + 1);
                }
            }
            else
            {
                printf("%d",i);
                for (int k = m - 1; k > 0; k--)
                    printf("%d",k);
                break;
            }
        }
        printf("\n");
    }
}