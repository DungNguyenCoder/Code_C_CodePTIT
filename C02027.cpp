#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	char cnt = 'a';
	int l = 1;
	for (int i = 1; i <= n; i++)
	{
		if(i % 2)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("%c ",cnt);
				++cnt;
				++l;
			}
		}
		else
		{
			for (int j = l + i - 1; j > l - 1; j--)
			{
				char k = 'a' + j - 1;
				printf("%c ",k);
				
			}
			cnt += i;
			l += i;
		}
		printf("\n");
	}
}