/*   SUM OF FIRST AND LAST DIGIT OF A NUMBER   */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  int a,n,f,l,sum;
  p("\n Enter any number");
  s("%d",&n);
  l=n%10;
  a=log10(n);
  f=n/pow(10,a);
  sum=l+f;
  p("\n Sum of first digit and last digit of %d is %d",n,sum);
  getch();
}
