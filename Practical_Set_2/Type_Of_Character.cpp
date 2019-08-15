/*   CHECKING TYPE OF CHARACTER INPUT   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  char a;
  p("\n Enter any character ::");
  s("%c",&a);
  if(a>='A' && a<='Z')
  {
    p("\n %c is a capital letter.",a);
  }
  else if(a>='a' && a<='z')
  {
    p("\n %c is a small letter.",a);
  }
  else if(a>='0' && a<='9')
  {
    p("\n %c is a digit.",a);
  }
  else
  {
    p("\n %c is a special character.",a);
  }
  getch();
}
