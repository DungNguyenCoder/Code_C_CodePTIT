#include <stdio.h>
#include <math.h>

typedef long long ll;

int prime [10000000];

void sieve()
{
	for (int i = 0; i < 10000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i < sqrt(10000000); i++)
    {
        if (prime[i])
        {
            for (int j = i*i; j < 10000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    scanf("%d",&n);
    for (int i = 1;i < n; i++)
    {
        printf("%d\n",i);
    }
}