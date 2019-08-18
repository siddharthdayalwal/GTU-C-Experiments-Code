/*   SUM AND AVERAGE OF NO. OF TERMS USER WANTS   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int i,a,sum=0;
	float avg,n;
	p("Enter no. of terms ::");
	s("%f",&n);	
	p("\n");
	for(i=1;i<=n;i++)
	{
		p("Enter value.%d :: ",i);
		s("%d",&a);
		sum+=a;
	}
	avg=sum/n;
	p("\n SUM = %d",sum);
	p("\n AVG = %f",avg);
	getch();
}
