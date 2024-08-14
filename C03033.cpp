#include <stdio.h>
#include <math.h>

typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d = ",n);
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int cnt = 0;
                while (n % i == 0)
                {
                    ++cnt;
                    n /= i;
                }
                printf("%d^%d",i,cnt);
                if (n != 1) printf(" * ");
            }
        }
        if (n != 1) printf("%d^1",n);
        printf("\n");
    } 
}