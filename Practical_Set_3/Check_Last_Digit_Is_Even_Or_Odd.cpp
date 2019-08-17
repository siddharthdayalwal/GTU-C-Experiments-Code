/*   FACTORIAL OF A NUMBER   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
clrscr();
long int a,f=1,i;
p("\n Enter the number ::");
s("%ld",&a);
for(i=1;i<=a;i++)
{
	f*=i;
}
p("\n %ld! = %ld",a,f);
getch();
}
