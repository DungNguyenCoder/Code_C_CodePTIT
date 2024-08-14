#include <stdio.h>
#include <math.h>

typedef long long ll;

int cnt[100005];

int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    int check = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        scanf("%d%d",&a,&b);
        ++cnt[a];
        ++cnt[b];
        if(cnt[a] == n - 1 || cnt[b] == n - 1)
        {
            check = 1;
            break;
        }  
    }
    if(check)   printf("Yes");
    else    printf("No");
}