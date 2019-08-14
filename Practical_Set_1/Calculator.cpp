/* CALCULATOR */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  float a,b;
  p("\n Enter first value::");
  s("%f",&a);
  p("\n Enter second value::");
  s("%f",&b);
  p("\n%f + %f = %f",a,b,a+b);
  p("\n%f - %f = %f",a,b,a-b);
  p("\n%f * %f = %f",a,b,a*b);
  p("\n%f / %f = %f",a,b,a/b);
  getch();
}
