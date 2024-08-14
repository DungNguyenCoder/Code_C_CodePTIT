#include <stdio.h>
#include <math.h>

typedef long long ll;

ll f[92];

void fibo()
{
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 92; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main()
{
	fibo();
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		int check = 1;
		for (int i = 0; i < 92; i++)
		{
			if(n == f[i])
			{
				printf("YES\n");
				check = 0;
				break;
			}
		}
		if(check)
			printf("NO\n");
	}
}
