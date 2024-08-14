#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return n > 1;
}

int check (int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum % 5 == 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for (int i = 5; i < n; i++)
	{
		if(check(i) && nt(i))
		{
			printf("%d ",i);
			++cnt;
		}
	}
	printf("\n%d",cnt);
}
