#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long ll;

int main()
{
	int n;
	scanf("%d",&n);
	int cnt = 0;
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for (int i = 0;i < n - 1; i ++)
	{
	    for (int j = i + 1; j < n; j++)
	    {
	        if(a[i] > a[j])
	        {
	            int tmp = a[i];
	            a[i] = a[j];
	            a[j] = tmp;
	        }
	    }
	    ++cnt;
	    printf("Buoc %d: ",cnt);
	    for (int k = 0; k < n; k++)
	        printf("%d ",a[k]);
	    printf("\n");
	}
}