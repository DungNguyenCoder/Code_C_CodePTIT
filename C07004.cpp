#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 1;

struct Phanso
{
    int tu;
    int mau;
};
typedef struct Phanso phanso;

int gcd(int a, int b)
{
    while(b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a,b);
}

void quydong (phanso ps1, phanso ps2)
{
    int k = gcd(ps1.tu,ps1.mau);
    ps1.tu /= k;
    ps1.mau /= k;
    int l = gcd(ps1.tu,ps1.mau);
    ps1.tu /= l;
    ps1.mau /= l;
    int m = lcm(ps1.mau,ps2.mau);
    int a = ps1.tu * (m/ps1.mau);
    int b = ps2.tu * (m/ps2.mau);
    printf("%d/%d ",a,m);
    printf("%d/%d ",b,m);
    printf("\n");
}

void tong(phanso ps1, phanso ps2)
{
    phanso sum;
    sum.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    sum.mau = ps1.mau * ps2.mau;
    int k = gcd(sum.tu,sum.mau);
    sum.tu /= k;
    sum.mau /=k;
    printf("%d/%d\n",sum.tu,sum.mau);
}

void thuong(phanso ps1, phanso ps2)
{
    phanso dev;
    dev.tu = ps1.tu * ps2.mau;
    dev.mau = ps1.mau * ps2.tu;
    int k = gcd(dev.tu,dev.mau);
    dev.tu /= k;
    dev.mau /=k;
    printf("%d/%d\n",dev.tu,dev.mau);
}

void solution()
{
    phanso p,q;
    scanf("%d%d%d%d",&p.tu,&p.mau,&q.tu,&q.mau);
    // p.tu = input();
    // p.mau = input();
    // q.tu = input();
    // q.mau = input();
    quydong(p,q);
    tong(p,q);
    thuong(p,q);
}

int main()
{
    int t;
    if(CHECK)   scanf("%d",&t);
    else    t = 1;
    int Case = 1;
    while(t--)
    {
        printf("Case #%d:\n",Case);
        ++Case;
        solution();
    }
}