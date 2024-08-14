#include <stdio.h>
#include <math.h>

typedef long long ll;

int cp (int n)
{
    int a = sqrt(n);
    if (a * a == n)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d",sum);
}