/*   FIBONACCI SERIES   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int n,i,a=0,b=1,c;
	p("\n Enter no. of terms of fibonacci series :: ");
	s("%d",&n);
	if(n==1)
	p("\n %d ",a);
	if(n>1)
	{
		p("\n %d ",a);
		p("%d ",b);
	}
	for(i=3;i<=n;i++)
	{
		c=a+b;
		p("%d ",c);
		a=b;
		b=c;
	}
	getch();
}
