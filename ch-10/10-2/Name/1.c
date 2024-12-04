#include<stdio.h>
#include<conio.h>

main()
{

	int i,j;

	// clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
			{
			if((j==1 && i==1)||(j==1 && i==2)||(j==1 && i==3)||(j==1 && i==4)||(j==1 && i==5)
			||(j==1 && i==5)||(j==2 && i==5)||(j==3 && i==5)||(j==4 && i==5)||(j==5 && i==5)
			||(j==5 && i==1)||(j==5 && i==2)||(j==5 && i==3)||(j==5 && i==4)||(j==5 && i==5))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf(" ");
		}
			printf(" ");
			
			
			for(j=1;j<=5;j++)
		{
			if((i==1||j==3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf(" ");
		}
			printf(" ");
			
			
			for(j=1;j<=5;j++)
		{
			if(i==1 || i==3 || i==5 ||(j==1 && i<=3)||(j==5 && i>=3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf(" ");
		}
			printf(" ");
			
			
			for(j=1;j<=5;j++)
		{
			if((i==1 || i==3)||(j==1 || j==5))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf(" ");
		}
			printf(" ");
			
			
			for(j=1;j<=10;j++)
			{
			if((j==1 && i==1)||(j==2 && i==2)||(j==3 && i==3)||(j==4 && i==4)||(j==5 && i==5)
			  ||(j==6 && i==4)||(j==7 && i==3)||(j==8 && i==2)||(j==9 && i==1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf("");
		}
			printf(" ");
			
			printf("\n");
	}
}
