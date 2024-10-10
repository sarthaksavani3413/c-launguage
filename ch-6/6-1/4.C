#include<stdio.h>
#include<conio.h>

main(){

    int n;

    clrscr();

    printf("enter the number : ");
    scanf("%d",&n);

    if(0<n)
    printf("\n%d is positive number \n",n);
    else if(0>n)
    printf("\n%d is negative number \n",n);
    else
    printf("\n%d is zero number \n",n);

    getch();
}