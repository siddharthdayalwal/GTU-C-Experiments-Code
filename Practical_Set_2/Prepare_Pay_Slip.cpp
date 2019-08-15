/*   DISPLAYING PAY SLIP   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  float b,da,hra,ma=300,pf,g,nt;
  p("\n Enter the Basic Price :: Rs.");
  s("%f",&b);
  da=0.1*b;
  hra=0.075*b;
  pf=0.125*b;
  g=b+da+hra+ma;
  nt=g-pf;
  p("\n Your Gross Salary is :: Rs.%f\n",g);
  p("\n Your Net Salary is :: Rs.%f",nt);
  getch();
}
