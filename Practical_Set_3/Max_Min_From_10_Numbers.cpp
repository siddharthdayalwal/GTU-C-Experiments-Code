/*   MAXIMUM AND MINIMUM NUMBER OUT OF 10 NUMBER   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  int i,n,max,min;
  p("Enter the value.1 ::");
  s("%d",&n);
  max=n;
  min=n;
  for(i=2;i<=10;i++)
  {
	p("Enter the value.%d ::",i);
	s("%d",&n);
	if(n>max)
	{
      		max=n;
    	}
	if(n<min)
	{
      		min=n;
	}
  }
  p("\n Maximum number is %d",max);
  p("\n Minimum number is %d",min);
  getch();
}
