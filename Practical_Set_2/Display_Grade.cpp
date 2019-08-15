/*   DISPLAYING GRADE OF STUDENT   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  float m;
  p("\n Enter the marks of the student ::");
  s("%f",&m);
  if(m>=80)
  {
    p("\n Congratulations \n\n You are passed with Distinction.");
  }
  else if(m>=60)
  {
    p("\n Congratulations \n\n You are passed with First Class.");
  }
  else if(m>=40)
  {
    p("\n Congratulations \n\n You are passed with Second Class.");
  }  
  else
  {
    p("\n Sorry to say \n\n You are failed");
  }
  getch();
}
