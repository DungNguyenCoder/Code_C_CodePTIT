#include <stdio.h>
#include <math.h>

typedef long long ll;

void swap (ll *a, ll *b)
{
	ll tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	ll a,b,c,d,e,f;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	if (a > b) swap(&a,&b);
	if (c > d) swap(&c,&d);
	if (e > f) swap(&e,&f);
	if (b == d && b == f && a + e + c == b)
		printf("YES");
	else if (a + e == d && b == f && c + f == d)
		printf("YES");
	else if (a + c == f && b == d && d + e == f)
		printf("YES");
	else if (e + c == b && f == d && a + d == b)
		printf("YES");
    else if (c + f == b && d == e && a + d == b)
    
    else if ()
	else
		printf("NO");
}