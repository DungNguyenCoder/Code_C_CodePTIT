#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;

int CHECK = 1;

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int nt(int n)
{
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int nt1(int n)
{
    if(n == 2 || n == 3 || n == 5 || n == 7)
        return 1;
    return 0;
}

int check(int n)
{
    int tmp = n;
    int sum = 0;
    while(tmp)
    {
        int a = tmp % 10;
        if(nt1(a) == 0)
            return 0;
        sum += a;
        tmp /= 10;
    }
    return nt(sum) && nt(n);
}

void solution()
{
    int a,b;
    a = input(); b = input();
    int cnt = 0;
    for(int i = a; i <= b; i++)
    {
        if(check(i))
            ++cnt;
    }
    printf("%d\n",cnt);
}

int main()
{
    int t;
    if(CHECK)   t = input();
    else    t = 1;
    while(t--)
    {
        solution();
    }
}