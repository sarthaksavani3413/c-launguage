#include<stdio.h>
#include<conio.h>

main(){

    int mark;
    char grade;

    clrscr();

	  printf("enter your mark : ");
	  scanf("%d",&mark);

	  (mark>=91 && mark<=100)
	  ? grade='A+'
		 : (mark>=81 && mark<=90)
		 ? grade='A'
			 : (mark>=71 && mark<=80)
			 ? grade='B'
				:(mark>=61 && mark<=70)
				? grade='C'
					:(mark>=51 && mark<=60)
					? grade='D'
						:(mark>=41 && mark<=50)
						? grade='E'
							:(grade='F');

	  switch (grade){
		 case 'A+':
			printf(" your grade A+ excellent");
		 break;
		 case 'A':
			printf("your grade A well done");
		 break;
		 case 'B':
			printf("your grade B good job");
		 break;
		 case 'C':
			 printf("your grade C you are pass");
		 break;
		 case 'D':
			printf("your grade D forcefully pass");
		 break;
		 case 'E':
			printf("your grade E fail");
		 break;
		 default :
			printf("invalid grade");

	  }


	  if(grade>='A' && grade<='E'){
		printf("\n you are pass");
	  }
	  else
	  {
		printf("try next time...");
    }

    getch();
}
