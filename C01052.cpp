#include <stdio.h>
#include <math.h>

typedef long long ll;


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int cnt = 0;
        if(n % 2 == 0)
            ++cnt;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0 && i % 2 == 0 && i != sqrt(n))
            {
                ++cnt;
            }
            if(n % i == 0 && (n / i) % 2 == 0 && i != sqrt(n))
            {
                ++cnt;
            }
            if(i == sqrt(n) && i % 2 == 0)
                ++cnt;
            
        }
        printf("%d\n",cnt);
    }
 
}