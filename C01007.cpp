#include <stdio.h>

typedef long long ll;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int tong = a + b;
    int hieu = a - b;
    ll tich = 1ll * a * b;
    double chian, chiad, chiat;
    if (b == 0)
    {
        chian = 0;
        chiad = 0;
        chiat = 0;
    }
    else
    {
        chian = a / b;
        chiad = a % b;
        chiat = (1.0*a) / b;
    }
    printf("%d\n%d\n%lld\n%.0lf\n%.0lf\n%.2lf",tong,hieu,tich,chian,chiad,chiat);

}