#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,num=22;
	char ch='a';
	
	clrscr();
	
	for(i=1;i<=5;i++)
	{   
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%c\t",ch);
				ch++;
			}
			else
			{                 
				printf("%d\t",num);
				num+=11;
			}
		}
		printf("\n");
	}
	getch();
}
