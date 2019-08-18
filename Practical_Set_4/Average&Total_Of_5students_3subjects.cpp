/*   MARKS OF 3 SUBJECTS OF 5 STUDENTS   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
	clrscr();
	int i,j,m,t=0;
	float a;
	for(i=1;i<=5;i++)
	{
		p("\n \nEnter marks of student.%d :: \n",i);
		for(j=1,t=0;j<=3;j++)
		{
			p("Marks.%d :: ",j);
			s("%d",&m);
			t+=m;
		}
		a=t/3.0;
		p("Total marks of student.%d = %d",i,t);
		p("\nAvg marks of student.%d = %f",i,a);
	}
	getch();
}
