#include<stdio.h>
#include<conio.h>

main(){

      float bs,hra,da,ta,gs;

      

      printf("enter basic salary : ");
      scanf("%f",&bs);

      hra=bs*(10.00/100.00);
      da=bs*(5.00/100.00);
      ta=bs*(8.00/100.00);       

      gs=bs+hra+da+ta;

      printf("gross salary : %.2f",gs);	

      getch();
}
