#include <stdio.h>
#include <math.h>

typedef long long ll;

int cnt[30005];
int a[105];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            ++cnt[a[i]];
            if(a[i] > max)  max = a[i];
        }
        int maxcnt = -1;
        for (int i = 0; i <= max; i++)
        {
            if(cnt[i] > maxcnt) maxcnt = cnt[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(cnt[a[i]] == maxcnt && cnt[a[i]] != 0)
            {
                printf("%d ",a[i]);
            }
            cnt[a[i]] = 0;
        }
        printf("\n");
    }
}