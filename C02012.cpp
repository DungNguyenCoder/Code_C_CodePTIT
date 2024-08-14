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
                if (j <= i)
                {
                    printf("%d",i - j + 1);
                }
                else
                {
                    printf("%d",j - i + 1);
                }
            }
            else
            {
                for (int k = i; k > i - m; k--)
                    printf("%d",k);
                break;
            }
        }
        printf("\n");
    }
}