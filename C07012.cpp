#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

struct HangHoa
{
    int stt;
    char TenHang[1005];
    char NhomHang[1005];
    double GiaMua;
    double GiaBan;
    double LoiNhuan;
};
typedef struct HangHoa hanghoa;

hanghoa data[1005];

int cmp (const void *a, const void *b)
{
    hanghoa *x = (hanghoa*)a;
    hanghoa *y = (hanghoa*)b;
    return y -> LoiNhuan - x -> LoiNhuan;
}

void solution()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        data[i].stt = i + 1;
        fgets(data[i].TenHang,1005,stdin);
        data[i].TenHang[strlen(data[i].TenHang) - 1] = NULL;
        fgets(data[i].NhomHang,1005,stdin);
        data[i].NhomHang[strlen(data[i].NhomHang) - 1] = NULL;
        scanf("%lf%lf",&data[i].GiaMua,&data[i].GiaBan);
        data[i].LoiNhuan = data[i].GiaBan - data[i].GiaMua;
        getchar();
    }
    qsort(data,1005,sizeof(hanghoa),cmp);
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %s %.2lf\n",data[i].stt,data[i].TenHang,data[i].NhomHang,data[i].LoiNhuan);
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

