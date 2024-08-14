#include <stdio.h>
#include <stdlib.h>

typedef long long ll;
#define mx 10000007

int a[mx + 5];

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)	
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmp);
        int ans = 2000000000, cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < ans)
            {
                ans = a[i] - a[i - 1];
                cnt = 1;
            }
            else if (a[i] - a[i - 1] == ans)
                ++cnt;
        }
        printf("%d %d\n",ans,cnt);
    }
}