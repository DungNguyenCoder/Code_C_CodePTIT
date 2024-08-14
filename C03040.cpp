#include <stdio.h>
#include <math.h>

typedef long long ll;

int sum (int n)
{
	int tong = 0;
	while(n)
	{
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main()
{
	int n;
	scanf("%d",&n);
	int tmp = n;
	int sum1 = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		while(n % i == 0)
		{
			sum1 += sum(i);
			n /= i;
		}
	}
	if (n != 1)
		sum1 += sum(n);
	if(sum(tmp) == sum1)
		printf("YES");
	else
		printf("NO");
}
