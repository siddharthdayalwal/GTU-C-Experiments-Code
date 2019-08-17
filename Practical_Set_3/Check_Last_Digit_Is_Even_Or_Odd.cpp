/*   CHECKING LAST DIGIT OF A NUMBER IS EVEN OR ODD   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int a;
	p("\n Enter any number ::");
	s("%d",&a);
	a%=10;
	p("\n Last digit of the above number is %d",a);
	if(a%2==0)
	{
		p(" and it is even");
	}
	else
	{
		p(" and it is odd");
	}
	getch();
}
