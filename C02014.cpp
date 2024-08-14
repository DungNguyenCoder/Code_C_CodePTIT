#include <stdio.h>
#include <math.h>

typedef long long ll;

int max(int a, int b)
{
    int max = -1;
    if(a > max) max = a;
    if(b > max) max = b;
    return max;
}

int main()
{
    int n; 
    scanf("%d",&n);
    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            printf("%d",max((int)abs(i),(int)abs(j)) + 1);
        }
        printf("\n");
    }
}