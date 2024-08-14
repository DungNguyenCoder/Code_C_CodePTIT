#include<stdio.h>
#include<math.h>
int main()
{
	int l , r ;
	while(scanf("%d%d", &l , &r)!= -1)
	{
		int length = abs(r - l) ;
		int  n = sqrt(length) ;
		int x = (n + 1 ) * (n + 1) - n * n ;
		if( length == n * n)
		{
			printf("%d", 2 * n - 1) ;	
		}	
		else if (length <= n * n + x / 2)
		{
			printf("%d", 2 * n) ;
		}
		else
		{
			printf("%d", 2 * n + 1) ;
		}
		printf("\n") ;
	}
}