#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char c = '@';
    if (n <= m)
    {
        char d = '@' + m;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (c + cnt < d)
                {
                    printf("%c",c + cnt); 
                    ++cnt;
                }
            else
            {
                    printf("%c",d - 1);
            }
            }
            ++c;
            printf("\n");
        }
    }
    else
    {
        char d = '@' + m;
        for (int i = 1; i <= m; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (c + cnt < d)
                {
                    printf("%c",c + cnt); 
                    ++cnt;
                }
            else
            {
                    printf("%c",d - 1);
            }
            }
            ++c;
            printf("\n");
        }
        for (int i = 1; i <= (n - m); i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%c",d - 1);
            }
            printf("\n");
        }
    }
}