#include<stdio.h>
#include<conio.h>

main(){

     int w,x,y,z;

     clrscr();

     printf("enter value of w : ");
     scanf("%d",&w);

     printf("enter value of x : ");
     scanf("%d",&x);

     printf("enter value of y : ");
     scanf("%d",&y);

     printf("enter value of z : ");
     scanf("%d",&z);

     if(w>z)
     {
	  if(w>y)
	  {
	       if(w>z)
	       {
		    printf("%d is a maximum");
	       }
	       else
	       {
		     printf("%d is a maximum");
	       }
	  }
	  else
	  {
		if(y>z)
		{
		      printf("%d is a maximum");
		}
		else
		{
		      printf("%d is a maximum");
		}
	  }
     }
     else
     {
	  if(x>y)
	  {
	       if(x>z)
	       {
		     printf("%d is a maximum");
	       }
	       else
	       {
		      printf("%d is a maximum");
	       }
	  }
	  else
	  {
	       if(y>z)
	       {
		      printf("%d is a maximum");
	       }
	       else
	       {
		      printf("%d is a maximum");
	       }
	  }
     }

     getch();
}