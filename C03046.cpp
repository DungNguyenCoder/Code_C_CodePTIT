#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (int n)
{
    int sum = 0;
    int tmp = n;
    int rev = 0;
    while(n)
    {
        int a = n % 10;
        if(a == 4)
            return 0;
        rev = rev * 10 + n % 10;
        sum += a;
        n /= 10;
    }
    if(rev == tmp && sum % 10 == 0)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for (int i = pow(10,n - 1); i < pow(10,n); i++)
        {
            if(check(i))
                printf("%d ",i);
        }
        printf("\n");
    }
}