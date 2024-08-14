#include <stdio.h>
#include <math.h>

typedef long long ll;

int max(int a,int b)
{
    int _max = -1;
    if (a > _max)    _max = a;
    if (b > _max)    _max = b;
    return _max;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int c;
    int check = 0;
    if (n <= m)
    {
        for (int i = m; i >= 1; i--)
        {
            for (int j = m; j >= 1; j--)
            {
                c = 'a' + max(i,j) - 1;
                if(i >= m - n + 1)
                    printf("%c",c);
                else
                {
                    check = 1;
                    break;
                }
            }
            if (check)
                break;
            printf("\n");
        }
    }
    else
    {
        for (int i = m; i >= 1; i--)
        {
            for (int j = m; j >= 1; j--)
            {
                c = 'a' + max(i,j) +(n - m - 1);
                printf("%c",c);
            }
            printf("\n");
        }
        for (int i = 1; i <= (n - m); i++)
        {
            int cnt = m;
            int a = 0;
            while(cnt)
            {
                printf("%c",'a' + n - 1 + a);
                --a;
                --cnt;
            }
            printf("\n");
        }
    }
}