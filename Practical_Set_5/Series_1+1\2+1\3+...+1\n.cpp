/*   EVALUATING SERIES 1 + 1/2 + 1/3 +...+ 1/n   */
/*   In the filename I have used backslash ( \ ) instead of divide ( / )    */

#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int i,n;
	float sum;
	p("\n Enter the number of terms :: ");
	s("%d",&n);
	p("\n");
	for(i=1,sum=0;i<=n;i++)
	{
		sum+=1.0/i;
		p("+ 1/%d ",i);
	}
	p(" = %f",sum);
	getch();
}
