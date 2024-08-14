#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int tn(int n)
{
    int tmp = n;
    int rev = 0;
    while(n)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (tn(i) && nt (i))
            {
                printf("%d ",i);
                ++cnt;
                if (cnt == 10)
                {
                    printf("\n");
                    cnt = 0;
                }
            } 
        }
        printf("\n\n");
    }
}