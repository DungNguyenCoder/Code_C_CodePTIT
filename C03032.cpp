#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int check (int n)
{
    int cnt = 0;
    int dem = 0;
    while(n)
    {
        int a = n % 10;
        if (a == 2 || a == 3 || a == 5 || a == 7)
            ++cnt;
        ++dem;
        n /= 10;
    }
    return cnt == dem;
}

int main()
{
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if (check(i) && nt(i))
            {
                ++cnt;
            }
        }
        printf("%d\n",cnt);
    }
}