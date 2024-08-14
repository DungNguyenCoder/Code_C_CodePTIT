#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (ll n)
{
	ll tmp = n;
	ll rev = 0;
	int sum = 0;
	while(n)
	{
		rev = rev * 10 + n % 10;
		sum += n % 10;
		if((n%10) % 2 == 0)
			return 0;
		n /= 10;
	}
	if (rev == tmp && sum % 2)
		return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(check(n))
			printf("YES\n");
		else
			printf("NO\n");	
	}
}
