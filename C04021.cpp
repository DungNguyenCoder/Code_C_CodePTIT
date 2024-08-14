#include <stdio.h>
#include <math.h>

typedef long long ll;
#define mx 100005

void rightrotate (int a[], int n)
{
	int x = a[n - 1];
	for (int i = n - 1; i >= 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = x;
}

int main()
{
    // int t;
    // scanf("%d",&t);
    // while(t--)
    {
        int n,k;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        k %= n;
        for (int i = 1; i <= k; i++)
        {
            rightrotate(a,n);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
    }
}