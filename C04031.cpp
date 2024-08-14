#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef long long ll;

int a[105];

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int main()
{
    int t = input();
    int ex = 1;
    while(t--)
    {
        int n = input();
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        int maxcnt = 0;
        int cnt = 1;
        int cnt1 = 1;
        for (int i = 1; i < n; i++)
        {
            if(a[i - 1] < a[i])
            {
                ++cnt1;
            }
            if(cnt1 > maxcnt)
                maxcnt = cnt1;
            if(a[i - 1] >= a[i])
                cnt1 = 1;
        }
        // for(int i = 0; i < n; i++)
        // {
        //     if(cnt == maxcnt)
        //     {
        //         indexx[i - maxcnt] = 1;
        //     }
        //     if(a[i - 1] < a[i])
        //     {
        //         ++cnt;
        //     }
        //      if(a[i - 1] >= a[i])
        //         cnt = 0;
        // }
        printf("Test %d:\n",ex);
        printf("%d\n",maxcnt);
        //for(int i = 0; i < maxcnt; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(a[j - 1] < a[j])
                {
                    ++cnt;
                }
                else
                {
                    cnt = 1;
                }
                if(cnt == maxcnt)
                {
                    int check = j;
                    for(int k = check - maxcnt + 1; k <= check; k++)
                    {
                        printf("%d ",a[k]);
                    }
                    printf("\n");
                }
            }
        }
        ++ex;
    }
}