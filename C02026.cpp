#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if (n == m)
    {
        char c = '@' + n;
        char d = '@' + n;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (c + cnt <= d)
                {
                    printf("%c",c + cnt); 
                    ++cnt;
                }
            else
            {
                    printf("%c",d);
            }
            }
            --c;
            printf("\n");
        }
    }
    else if (n < m)
    {
        char d = '@' + n - 1;
        char gh = '@' + m;
        for (int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (d + j <= gh)
                {
                    printf("%c",d + j); 
                }
                else
                {
                    printf("%c",gh);
                }
            }
            --d;
            printf("\n");
        }
    }
    else
    {
        char c = '@' + m;
        char d = '@' + m;
        for (int i = 1; i <= n - m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%c",c);
            }
            printf("\n");
        }
        for (int i = 1; i <= m; i++)
        {
            int cnt = 0;
            for (int j = 1; j <= m; j++)
            {
                if (c + cnt <= d)
                {
                    printf("%c",c + cnt); 
                    ++cnt;
                }
            else
            {
                    printf("%c",d);
            }
            }
            --c;
            printf("\n");
        }
    }
}