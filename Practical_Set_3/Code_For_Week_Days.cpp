/*   NUMBER CODE FOR WEEK DAYS   */
#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
void main()
{
  clrscr();
  int a;
  p("Select DAY CODE from the following::\n\n Sunday   ::1\n Monday   ::2\n Tuesday  ::3\n Wednesday::4\n Thursday ::5\n Friday   ::6\n Saturday ::7\n\n Enter the code::");
  s("%d",&a);
  switch(a)
  {
	case 1:
    	{
		p("\n It's a Sunday today.");
    		break;
    	}
    	case 2:
    	{
		p("\n It's a Monday today.");
		break;
    	}
    	case 3:
    	{	
      		p("\n It's a Tuesday today.");
		break;
    	}
    	case 4:
	{
      		p("\n It's a Wednesday today.");
		break;
    	}
    	case 5:	
	{
      		p("\n It's a Thursday today.");
	    	break;
    	}
    	case 6:
	{
      		p("\n It's a Friday today.");
	    	break;
    	}
    	case 7:
	{
      		p("\n It's a Saturday today.");
	    	break;
    	}
    	default:
	{  
      		p("\n Not a Valid DAY_CODE.");
    	}	
  }
 getch();
}
