#include<stdio.h>
#include<math.h>

typedef long long ll;


int check (int n)
{
    int sum = 0;
    int tmp = n;
    while(n)
    {
        int gt = 1;
        for (int i = 1; i <= n % 10; i++)
            gt *= i;
        sum += gt;
        n /= 10;
    }
    if (tmp == sum)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if (check(n))    printf("1");
    else    printf("0");
}