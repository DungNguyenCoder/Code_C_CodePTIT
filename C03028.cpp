#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gt (int n)
{
	ll res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

int th (int j, int i)
{
	int res = (gt(i) / gt(j)) / gt(i - j);
	return res;
}

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
            printf("%d ",th(j,i));
		}
		printf("\n");
	}
}