#include <stdio.h>
#include <math.h>

typedef long long ll;

ll cnt[10];

int nt (ll n)
{
//	if (n == 2 || n == 3 || n == 5 || n == 7)
//		return 1;
//	return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return n > 1;
}

ll tn (ll n)
{
	ll rev = 0;
	while(n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}

int main()
{
	ll n;
	scanf("%lld",&n);
	ll tmp = tn(n);
	while(n)
	{
		if(nt(n % 10))
			++cnt[(n%10)];
		n /= 10;
	}
	while(tmp)
	{
		if(cnt[tmp % 10])
		{
			printf("%lld %lld\n",tmp%10,cnt[tmp%10]);
			cnt[tmp%10] = 0;
		}
		tmp /= 10;
	}
}
