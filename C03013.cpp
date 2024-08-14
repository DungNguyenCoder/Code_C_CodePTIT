#include <stdio.h>
#include <math.h>

typedef long long ll;

ll fibo[30];

int main()
{
    int n;
    scanf("%d",&n);
    fibo[0] = 0;
    fibo[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
    for (int i = 0; i < n; i++)
    {
        printf("%lld ",fibo[i]);
    }
}