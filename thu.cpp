#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int a[1000];

int main()
{
    char s[100];
    scanf("%s",s);
    int leng1 = strlen(s);
    int n;
    scanf("%d",&n);
    int idx = 0;
    for(int l = 1; l <= n; l++)
    {
        char t[100];
        scanf("%s",t);
        int leng2 = strlen(t);
        if(leng1 == leng2)
        {
            int cnt = 0;
            int ok = 1;
            for(int i = 0; i < leng1; i++)
            {
                if(s[i] != t[i])
                    ++cnt;
                if(cnt > 2)
                {
                    ok = 0;
                    break;
                }
            }
            if(ok)
            {
                a[idx] = l;
                ++idx;
            }
        }
    }
    for(int i = 0; i < idx; i++)
        printf("%d ",a[i]);
}