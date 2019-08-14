/*   TEMPERATURE CONVERTER   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  float f,c;
  p("\n Enter the temperature in degree CELCIUS ::");
  s("%f",&c);
  f = 1.8*c + 32;
  p("\n Using formula --> f = 1.8*c + 32.\n\n %f degree CELCIUS = %f degree FERHENHEIT.",c,f);
  getch();
}
