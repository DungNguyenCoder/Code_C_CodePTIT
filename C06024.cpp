#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void tong(char s[1001], char t[1001]){
	int kq[2005];
	int lens=strlen(s);
	int lent=strlen(t);
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css= (i>=0) ? s[i]-'0' : 0;
		int cst= (j>=0) ? t[j]-'0' : 0;
		int x=css + cst + du;
	    kq[k]=x%10;
	    du=x/10;
	    k++;
	    j--;
	    i--;
	}
	if (du>0) printf("1");
	while (kq[k]==0 && k>=1) k--;
	for (i=k;i>=0;i--) printf("%d", kq[i]);
	printf("\n");
}

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    char s[1001];
    char a[1001];
    while(t--)
    {
        scanf("%s", &s);
        scanf("%s", &a);
        tong(s, a);
    }
}

