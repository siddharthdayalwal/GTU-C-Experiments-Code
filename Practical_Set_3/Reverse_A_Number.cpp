/*   REVERSE OF A NUMBER   */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	long int a,i,n,sum=0,b,x;
	p("\n Enter the number ::");
	s("%ld",&x);
	a=x;
	n=log10(a)+1;
	for(i=1;i<=n;i++)
	{
		b=a%10;
		sum=sum*10+b;
		a/=10;
	}
	p("\n REVERSE of %ld is %ld",x,sum);
	getch();
}
