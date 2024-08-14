#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (ll n)
{
	ll tmp = n;
	ll sum = 0;
	ll rev = 0;
	ll cnt = 0;
	while(n)
	{
		if(n % 10 == 6)
		{
			cnt = 1;
		}
		rev = rev * 10 + n % 10;
		sum += n % 10;
		n /= 10;
	}
	if (tmp == rev && sum % 10 == 8 && cnt == 1)
		return 1;
	return 0;
}

int main()
{
	ll a,b;
	scanf("%lld%lld",&a,&b);
	if(a > b)
	{
		ll tmp = a;
		a = b;
		b = tmp;
	}
	for (ll i = a; i <= b; i++)
	{
		if(check(i))
		{
			printf("%lld ",i);
		}
	}
}
