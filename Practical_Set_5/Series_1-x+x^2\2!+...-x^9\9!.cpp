
/*   EVALUATING SERIES 1-x+x^2/2!+...-x^9/9!   */
/*     In the filename I have used backslash ( \ ) instead of divide ( / )     */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p printf
#define s scanf
void main()
{
clrscr();
int i,n,f;
float sum;
p("\n Enter the value of x :: ");
s("%d",&n);
p("\n");
p("\n 1");
for(i=1,sum=1,f=1;i<=9;i++)
{
	f*=i;
	if(i%2!=0)
	{
		sum-=(pow(n,i))/float(f);
		p("-%d^%d/%d!",n,i,i);
	}
	else
	{
		sum+=(pow(n,i))/float(f);
		p("+%d^%d/%d!",n,i,i);
	}
}
p(" = %f",sum);
getch();
}
