#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (int n)
{
	int tmp = n;
	int sum = 0;
	int rev = 0;
	while(n)
	{
		rev = rev * 10 + n % 10;
		sum += n % 10;
		n /= 10;
	}
	return (tmp == rev && sum % 10 == 0);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int cnt = 0;
        int a1 = pow(10,n - 1);
        int b1 = pow(10,n);
		for (int i = a1; i < b1; i++)
		{
			if(check(i))
			{
				++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}
