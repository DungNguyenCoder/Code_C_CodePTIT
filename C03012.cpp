#include <stdio.h>
#include <math.h>

typedef long long ll;

int fibo (ll n)
{
	if (n == 0 || n == 1)
        return 1;
	ll f1 = 1, f2 = 0, fn;
	for (int i = 3; i <= 93; i++)
	{
		fn = f1 + f2;
		f2 = f1;
		f1 = fn;
		if (fn == n)	
            return 1;
		if (fn > n)	break;
	}
	return 0;
}

int main()
{
	ll n;
    scanf("%lld",&n);
	if (fibo(n))
        printf("1");
	else
        printf("0");
}