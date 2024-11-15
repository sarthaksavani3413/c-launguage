#include<stdio.h>
#include<conio.h>

int main() 
{
    int i,j,n=1;    
    
    clrscr();

    for (i=1;i<=5; i++) 
	{
        for (j=1;j<=i;j++) 
		{
            printf("%d\t",n++);  
        }
        printf("\n");  
    }
	getch();
}
