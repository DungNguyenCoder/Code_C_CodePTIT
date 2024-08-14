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
                    printf("%c",'A' + j + i - 2);
                }
                else
                {
                    printf("%c",'A' + m - j);
                }
            }
            else
            {
                for (int k = m; k > 0; k--)
                    printf("%c",'A' + k - 1);
                break;
            }
        }
        printf("\n");
    }
}