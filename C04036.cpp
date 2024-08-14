#include <stdio.h>
#include <math.h>

typedef long long ll;

int in()
{
    int n;
    scanf("%d",&n);
    return n;
}

int main()
{
    int t = in();
    while(t--)
    {
        int n = in();
        int cnt = 0;
        int c1000 = n / 1000;
        cnt += c1000;
        int d1000 = n % 1000;

        int c500 = d1000 / 500;
        cnt += c500;
        int d500 = d1000 % 500;

        int c200 = d500 / 200;
        cnt += c200;
        int d200 = d500 % 200;

        int c100 = d200 / 100;
        cnt += c100;
        int d100 = d200 % 100;

        int c50 = d100 / 50;
        cnt += c50;
        int d50 = d100 % 50;

        int c20 = d50 / 20;
        cnt += c20;
        int d20 = d50 % 20;

        int c10 = d20 / 10;
        cnt += c10;
        int d10 = d20 % 10;

        int c5 = d10 / 5;
        cnt += c5;
        int d5 = d10 % 5;

        int c2 = d5 / 2;
        cnt += c2;
        int d2 = d5 % 2;

        cnt += d2;
        printf("%d\n",cnt);
    }
}