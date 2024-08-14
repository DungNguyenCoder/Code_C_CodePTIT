#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a,b;
	if(n != 0)
	{
		printf("@");
		printf("\n");
	}
	for (int i = 1; i < n; i++)
	{
		{
			for (int j = 0; j <= 2*i; j += 2)
			{
				if(j == 0)
				{
					printf("@");
				}
				else
				{
					a = 'A' + j - 1;
					printf("%c",a);
				}
			}
				
			for (int j = 2*i - 2; j >= 0; j -=2)
			{
				if(j == 0)
				{
					printf("@");
				}
				else
				{
					a = 'A' + j - 1;
					printf("%c",a);
				}
			}
				
		}	
		printf("\n");
	}
}