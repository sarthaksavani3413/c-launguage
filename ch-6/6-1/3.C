#include<stdio.h>
#include<conio.h>

main(){

     int math,sci,eng,total;
     float avg;

     clrscr();

     printf("enter your subject marks : ");
     scanf("%d",&math);

     printf("enter your subject marks : ");
     scanf("%d",&sci);

     printf("enter your subject marks : ");
     scanf("%d\n",&eng);

     total=math+sci+eng;
     printf("total marks : %d\n",total);

     avg=total/3;
     printf("average marks : %f",avg);

     getch();
}
