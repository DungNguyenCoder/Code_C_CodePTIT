#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    char c = '@' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c",c);
            ++c;
        }
        c = '@' + n - i - 1;
        printf("\n");
    }
}   