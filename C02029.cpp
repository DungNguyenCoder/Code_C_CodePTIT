#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		int cnt = i;
		char k = '@'+ i;
		int step = n - 1;
		printf("%c ",k);
		for (int j = 2; j <= i; j++)
		{
			cnt += step;
			char l = '@' + cnt;
			printf("%c ",l);
			--step;
		}
		printf("\n");
	}
}