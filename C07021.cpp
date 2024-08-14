#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 0;

struct Sinhvien
{
    int stt;
    char ten[1000];
    double diem1, diem2, diem3;
    double tongdiem;
};
typedef struct Sinhvien sinhvien;

int cmp (const void* a, const void* b)
{
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;

    return x -> tongdiem - y -> tongdiem;
}

sinhvien sv[10000];

void solution()
{
    int cnt = 0;
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n == 1)
        {
            int t;
            scanf("%d",&t);
            while(t--)
            {
                getchar();
                sv[cnt].stt = cnt+1;
                gets(sv[cnt].ten);
                scanf("%lf%lf%lf",&sv[cnt].diem1,&sv[cnt].diem2,&sv[cnt].diem3);
                sv[cnt].tongdiem = sv[cnt].diem1 + sv[cnt].diem2 + sv[cnt].diem3;
                ++cnt;
            }
            printf("%d\n",cnt);
        }
        else if(n == 2)
        {
            int t;
            scanf("%d",&t);
            t--;
            getchar();
            gets(sv[t].ten);
            scanf("%lf%lf%lf",&sv[t].diem1,&sv[t].diem2,&sv[t].diem3);
            sv[t].tongdiem = sv[t].diem1 + sv[t].diem2 + sv[t].diem3;
            printf("%d\n",t+1);
        }
        else if(n == 3)
        {
            qsort(sv,10000,sizeof(sinhvien),cmp);   
            for(int i = 0; i < cnt; i++)
            {
                printf("%d %s %lf %lf %lf\n",sv[i].stt,sv[i].ten,sv[i].diem1,sv[i].diem2,sv[i].diem3);
            } 
            break;
        }
    }   
}

int main()
{ 
    int t;
    if(CHECK)
    {
        int t;
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}   