#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt (int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

int sum(int n)
{
    int tong = 0;
    while(n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int fibo (int n)
{
	if (n == 0 || n == 1)	return 1;
	int f1 = 1, f2 = 0, fn;
	for (int i = 3; i <= 93; i++)
	{
		fn = f1 + f2;
		f2 = f1;
		f1 = fn;
		if (fn == n)	return 1;
		if (fn > n)	break;
	}
	return 0;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++)
    {
        if (nt(i) && fibo(sum(i)))
            printf("%d ",i);
    }

}