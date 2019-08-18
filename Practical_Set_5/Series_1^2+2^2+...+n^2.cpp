/*   EVALUATING SERIES 1^2+2^2+...+n^2   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int sum,i,n;
	p("\n Enter the number of terms :: ");
	s("%d",&n);
	p("\n");
	for(i=1,sum=0;i<=n;i++)
	{
		sum+=i*i;
		p("+ %d^2 ",i);
	}
	p(" = %d",sum);
	getch();
}
