#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		int cnt = i;
		int step = n - 1;
		printf("%d ",i);
		for (int j = 2; j <= i; j++)
		{
			cnt += step;
		
			printf("%d ",cnt);
			--step;
		}
		printf("\n");
	}
}