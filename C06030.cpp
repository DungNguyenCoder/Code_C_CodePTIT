#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

word b[1005];

int main()
{
	char s[1005];
	gets(s);
	char a[1000][1000];
	int n = 0;
	char *token = strtok(s," ");
	while(token != NULL)
	{
		strcpy(a[n],token);
		++n;
		token = strtok(NULL," ");
	}
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		int x = strlen(a[i]);
		if(max < x)
			max = x;
	}
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		int idx = -1;
		if(strlen(a[i]) == max)
		{
			for(int j = 0; j < k; j++)
			{
				if(strcmp(a[i],b[j].tu) == 0)
				{
					idx = j;
					break;
				}
			}
			if(idx == -1)
			{
				word new_word;
				strcpy(new_word.tu,a[i]);
				new_word.f = 1;	
				b[k] = new_word;
				++k;
			}
			else
			{
				b[idx].f += 1;
			}
		}
	}
	for(int i = 0; i < k; i++)
	{
		printf("%s %d %d\n",b[i].tu,max,b[i].f);
	}
}



