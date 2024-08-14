#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 1;

struct ToaDo
{
    double x,y;
    double z;
};
typedef struct ToaDo toado;

void solution()
{
    toado a,b,c;
    scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y);
    a.z = sqrt(pow((a.x-b.x),2) + pow((a.y-b.y),2));
    b.z = sqrt(pow((b.x-c.x),2) + pow((b.y-c.y),2));
    c.z = sqrt(pow((a.x-c.x),2) + pow((a.y-c.y),2));
    if(a.z + b.z <= c.z || b.z + c.z <= a.z || c.z + a.z <= b.z)
    {
        printf("INVALID\n");
        return;
    }
    double res = a.z + b.z + c.z;
    printf("%.3lf\n",res);
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