    #include <stdio.h>
    #include <math.h>

    typedef long long ll;

    int a[105];
    int even[105];
    int odd[105];

    int main()
    {
        // int t;
        // scanf("%d",&t);
        // int cnt = 1;
        // while(t--)
        {
            int n;
            scanf("%d",&n);
            int min = 1000000005;
            int secmin = 1000000005;
            for (int i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
                if(a[i] < min)
                    min = a[i];
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] < secmin && a[i] != min)
                {
                    secmin = a[i];
                }
            }
            printf("%d %d",min,secmin);
        }
    }