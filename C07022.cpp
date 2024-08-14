#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 0

struct SV
{
    int msv;
    char ten[1000];
    double x,y,z;
};
typedef struct SV sv;

sv a[1000];

void solution()
{
    int t;
    int idx = 0;
    while(1)
    {
        scanf("%d",&t);
        if(t == 1)
        {
            int q;
            scanf("%d",&q);
            printf("%d\n",q);
            while(q--)
            {
                a[idx].msv = idx+1;
                char s[1000];
                double A,B,C;
                getchar();
                gets(s);
                scanf("%lf%lf%lf",&A,&B,&C);
                strcpy(a[idx].ten,s);
                a[idx].x = A;
                a[idx].y = B;
                a[idx].z = C;
                ++idx;
            }
        }
        if(t == 2)
        {
            int q;
            scanf("%d",&q);
            printf("%d\n",q);
            double A,B,C;
            char s[1000];
            getchar();
            gets(s);
            strcpy(a[q-1].ten,s);
            scanf("%lf%lf%lf",&A,&B,&C);
            a[q-1].x = A;
            a[q-1].y = B;
            a[q-1].z = C;
        }
        if(t == 3)
        {
            for(int i = 0; i < idx; i++)
            {
                if(a[i].x < a[i].y && a[i].y < a[i].z)
                    printf("%d %s %.1lf %.1lf %.1lf\n",a[i].msv,a[i].ten,a[i].x,a[i].y,a[i].z);
            }
            return;
        }
    }
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