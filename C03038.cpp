#include <stdio.h>
#include <math.h>

typedef long long ll;

int check (int n, int p)
{
	int cnt = 0;
	while(n >= p)
	{
		cnt += n / p;
		n /= p;	
	}
	return cnt;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,p;
		scanf("%d%d",&n,&p);
		printf("%d\n",check(n,p));
	}
}
