#include <stdio.h>
#include <math.h>

typedef long long ll;

int a[105];
int even[105];
int odd[105];

int main()
{
    // int t;
    // scanf("%d",&t);
    // int cnt = 1;
    // while(t--)
    {
        int n;
        scanf("%d",&n);
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] % 2)
            {
                odd[cnt1] = a[i];
                ++cnt1;
            }
            else
            {
                even[cnt2] = a[i];
                ++cnt2;
            }
        }
        for (int i = 0; i < cnt2; i++)
            printf("%d ",even[i]);
        printf("\n");
        for (int i = 0; i < cnt1; i++)
            printf("%d ",odd[i]);
    }
}