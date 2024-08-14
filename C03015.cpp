#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (ll n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return n > 1;
}

ll max(ll a, ll b)
{
	ll _max = -1;
	if(a > _max)	_max = a;
	if(b > _max)	_max = b;
	return _max;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		if(nt(n))
		{
			printf("%lld\n",n);
			continue;
		}
		ll _max = -1;
		for (ll i = 2; i <= sqrt(n); i++)
		{
			while(n % i == 0)
			{
				_max = max(i,_max);
				n /= i;
			}
		}
		if(n != 1)
			_max = n;
		printf("%lld\n",_max);
	}
}
