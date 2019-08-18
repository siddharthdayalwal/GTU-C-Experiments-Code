/*   HEIGHT AND WEIGHT OF FIVE PERSONS AND COUNT A CONDITION   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
clrscr();
int i,c;
float h,w;
for(i=1,c=0;i<=5;i++)
{
	p("\n Enter details of person.%d :: \n",i);
	p(" HEIGHT :: ");
	s("%f",&h);
	p(" WEIGHT :: ");
	s("%f",&w);
	if(h>170 && w<50)
	c++;
}
p("\n Total %d persons have height > 170 and weight < 50.",c);
getch();
}
