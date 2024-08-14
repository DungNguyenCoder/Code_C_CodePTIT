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
        int a[n+5];
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        int check = 1;
        for (int i = 0; i < n/2; i++)
        {
            if(a[i] != a[n - 1 - i])
            {
                printf("NO");
                check = 0;
                break;
            }
        }
        if(check == 1)
            printf("YES");
        printf("\n");   
    }
}
// 1 2 3 4 5 4 3 2 1
// 





