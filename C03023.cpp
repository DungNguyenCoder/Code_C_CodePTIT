#include <stdio.h>
#include <math.h>

typedef long long ll;

int tn (int n)
{
	int tmp = n;
	int rev = 0;
	while(n)
	{
		if(n % 10 == 9)
			return 0;
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return tmp == rev;
}

int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 0;
	for (int i = 2; i < n; i++)
	{
		if(tn(i))
		{
			printf("%d ",i);
			++cnt;
		}
	}
	printf("\n%d",cnt);
}
