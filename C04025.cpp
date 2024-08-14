#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;

int a[105];
int b[105];
int c[105];

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	int n;
	scanf("%d",&n);
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if(a[i] % 2)
		{
			b[cnt1] = a[i];
			++cnt1;
		}
		else
		{
			c[cnt2] = a[i];
			++cnt2;
		}
	}
	qsort(b,cnt1,sizeof(int),cmp);
	qsort(c,cnt2,sizeof(int),cmp);
	for(int i = 0; i < cnt2; i++)
	{
		printf("%d ",c[i]);
	}
	for(int i = 0; i < cnt1; i++)
		printf("%d ",b[i]);
}