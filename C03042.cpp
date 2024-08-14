#include <stdio.h>
#include <math.h>

typedef long long ll;

int giam (int n)
{
    if(n < 10)
        return 1;   
    int a,b;
    while(n > 100)
    {
        a = n % 10;
        b = (n % 100) / 10;
        if (a >= b)
            return 0;
        n /= 10;
    }
    a = n % 10;
    b = (n % 100) / 10;
    if (b > a)
        return 1;
    return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
        if (a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if(giam(i))
            {
                ++cnt;
            }     
        }
        printf("%d\n",cnt);
	}
}
