#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void selections(int C[], int c)
{
	for( int i = 0 ; i  < c ; i++)
	{
		for( int j = i + 1 ; j < c ; j++)
		{
			if(C[i] > C[j])
			{
				int tmp = C[i] ;
				C[i] = C[j] ;
				C[j] = tmp ;
			}
		}
	}
}
void T(int C[] , int B[] , int c , int b)
{
	selections(B , b) ;
	selections(C, c) ;
	int demc = 0 , demb = 0 ;
	while(demc < c && demb < b)
	{
		if(C[demc] < B[demb])
		{
			printf("%d ",C[demc]);
			demc++ ;
		}
		else
		{
			printf("%d ", B[demb]) ;
			demb++ ;
		}
	}
	if(demc < c)
	{
		for( int i = demc ; i < c ; i++)
		{
			printf("%d ", C[i]) ;
		}
	}
	if(demb < b)
	{
		for( int i = demb ; i < b ; i++)
		{
			printf("%d ", B[i]) ;
		}
	}
}
void G(int C[] , int B[] , int c , int b)
{
	selections( C , c) ;
	selections(B , b) ;
	int demc = c - 1 , demb = b - 1 ;
	while(demc >= 0 && demb >= 0)
	{
		if(C[demc] > B[demb])
		{
			printf("%d ",C[demc]);
			demc-- ;
		}
		else
		{
			printf("%d ", B[demb]) ;
			demb-- ;
		}
	}
	if(demc > 0)
	{
		for( int i = demc ; i >=0; i--)
		{
			printf("%d ", C[i]) ;
		}
	}
	if(demb > 0)
	{
		for( int i = demb ; i >= 0 ; i--)
		{
			printf("%d ", B[i]) ;
		}
	}
}
void F(int C[] , int B[] , int c , int b )
{
	for( int i = 0 ; i < c ; i++)
	{
		printf("%d ", C[i]) ;
	}
	for( int i = 0 ; i < b ; i++)
	{
		printf("%d ", B[i]) ;
	}
}
void A(int C[] , int B[] , int c , int b)
{
	for( int i = 0 ; i < b ; i++)
	{
		printf("%d ", B[i]) ;
	}
	for( int i = 0 ; i < c ; i++)
	{
		printf("%d ", C[i]) ;
	}
}
int main()
{
	int t ;
	scanf("%d", &t) ;
	while(t--)
	{
		int c , b ;
		char s ;
		scanf("%d %d %c", &c , &b , &s) ;
		int C[c] , B[b] ;
		for( int i = 0 ; i < c ; i++)
		{
			scanf("%d", &C[i]) ;
		}
		for( int i = 0 ; i < b ; i++)
		{
			scanf("%d", &B[i]) ;
		}
		if( s == 'T')
		{
			T(C , B , c , b) ;
		}
		else if(s == 'G') 
		{
			G(C , B , c , b) ;
		}
		else if( s == 'F')
		{
			F(C ,B , c ,b) ;
		}
		else if(s == 'A')
		{
			A(C , B , c , b) ;
		}
		printf("\n") ;
	}
}