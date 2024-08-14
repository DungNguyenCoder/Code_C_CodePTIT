#include <stdio.h>
#include <math.h>

typedef long long ll;

int cp (int n)
{
    int a = sqrt(n);
    if (a * a == n)
        return 1;
    return 0;
}

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--)
    {
        scanf("%d",&n);
        if(cp(n))
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}