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

int main()
{

    int n;
    scanf("%d",&n);
    int cnt = 2;
    int check = 0;
    while(check < n)
    {
        if(nt(cnt))
        {
            printf("%d\n",cnt);
            ++check;
        }
        ++cnt;
    }
}