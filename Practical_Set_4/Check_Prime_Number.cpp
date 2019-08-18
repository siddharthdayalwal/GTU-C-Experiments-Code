/*   VALIDATION OF PRIME NUMBER   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
clrscr();
int n,i,c;
p("\n Enter any number :: ");
s("%d",&n);
for(i=1,c=0;i<=n;i++)
{
	if(n%i==0)
	c++;
}
if(c==2)
p("\n %d is a prime number",n);
else
p("\n %d is not a prime number",n);
getch();
}
