#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 1;
	int tmp = 0;
	for (int i = 1; i <= n; i++)
	{
		if(i % 2)
		{
			cnt += tmp;
			for (int j = 1; j <= i; j++)
			{
				printf("%d ",cnt);
				++cnt;
			}
		}
		else
		{
			for (int j = cnt + i - 1; j > cnt - 1; j--)
			{
				printf("%d ",j);
				
			}
			cnt += i;
		}
		printf("\n");
	}
}