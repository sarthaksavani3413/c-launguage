#include<stdio.h>
#include<conio.h>

main(){

     int a,b,c;

     clrscr();

     printf("press 1 for english language\n");
     printf("press 1 for hindi language\n");
     printf("press 1 for gujrati language\n");

     scanf("%d",&a);

     switch(a)
     {
	case 1:
	     printf("press 1 for english language");
	     clrscr();
	     printf("press 1 for internet recharge\n");
	     printf("press 2 for top-up recharge\n");
	     printf("press 3 for special recharge\n");
	     scanf("%d",b);
	break;
	case 2:
	     printf("press 2 for hindi language");
	     clrscr();
	     printf("internet recharge ke liye 1 dabaiye\n");
	     printf("top-up recharge ke liye 2 dabaiye\n");
	     printf("special recharge ke liye 3 dabaiye\n");
	     scanf("%d",b);
	break;
	case 3:
	     printf("press 3 for gujrati language");
	     clrscr();
	     printf("internet recharge karava mate 1 dabavo\n");
	     printf("top-up recharge karava mate 2 dabavo");
	     printf("special recharge karava mate 3 dabavo");
	     scanf("%d",b);
	break;
     }

     getch();
}

