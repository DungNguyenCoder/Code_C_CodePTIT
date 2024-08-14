#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1


void solution()
{
    int n;
    scanf("%d",&n);
    ll a[n+5];
    for(int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
        // a[i] *= a[i];
    }
    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            ll k = sqrt(a[i]*a[i] + a[j]*a[j]);
            if(k == sqrt(a[i]*a[i] + a[j]*a[j]))
            {
                for(int l = j+1; l < n; l++)
                {
                    if(a[l] == k)
                    {
                        printf("YES\n");
                        return;
                    }
                }
            }
        }
    }
    printf("NO\n");
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}