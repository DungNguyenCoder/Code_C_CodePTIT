#include <stdio.h>

long long max(long long a, long long b)
{
	return a > b ? a : b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
	int n;
	scanf("%d",&n);
	long long a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld",&a[i]);
	}
	long long tmp = 0;
	long long sum = -1e15;
	for (int i = 0; i < n; i++)
	{
		tmp += a[i];
		sum = max(sum,tmp);
		if (tmp < 0)	tmp = 0;
	}
	printf("%lld\n",sum);
    }
}