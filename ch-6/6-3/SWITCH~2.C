#include<stdio.h>
#include<conio.h>

main(){

     int a,b,c,d,e,f,g,h,i;
     int p=600,q=1200,tax,total;
     char name[10];
     double j;

     

     printf("press 1 for R K travels\n");
     printf("press 2 for RAJDHANI travels\n");
     printf("press 3 for ALANKAR travels\n");
     printf("enter choice : ");
     scanf("%d",&a);

    switch(a)
    {
	case 1:
	     
	     printf("R K travels\n");

	     printf("press 1 for surat to bhavnagar\n");
	     printf("press 2 for surat to ahmedabad\n");
	     printf("press 3 for surat to rajkot\n");
	     printf("enter choice : ");
	     scanf("%d",&b);
	     switch(b)
	     {
		case 1:
			
			printf("surat to bhavnagar\n");

			printf("press 1 for A.C BUS\n");
			printf("press 2 for non A.C BUS\n");
			printf("enter choice : ");
			scanf("%d",&c);
			switch(c)
			{
				case 1 :
					
					printf("A.C BUS\n");

					printf("press 1 for morning\n");
					printf("press 2 for evening\n");
					printf("enter choice : ");
					scanf("%d",&d);

					switch(d)
					{
						case 1 :
							
							printf("morning\n");

							printf("press 1 for 8.30 AM\n");
							printf("press 2 for 9.30 AM\n");
							printf("press 3 for 10.30 AM\n");
							printf("enter choice : ");
							scanf("%d",&e);

							switch(e)
							{
								case 1 :
									
									printf("8.30 AM\n");

									printf("press 1 for Bus booking\n");
									printf("press 2 for Exit\n");
									printf("enter choice : ");
									scanf("%d",&f);

									switch(f)
									{
										case 1 :
											
											printf("Bus booking\n");

											printf("press 1 for single sofo\n");
											printf("press 2 for double sofo\n");
											printf("enter choice : ");
											scanf("%d",&g);

											switch(g)
											{
												case 1 :
													
													printf("single sofo\n");

													printf("press 1 for price is 600 rupees\n");
													printf("enter choice : ");
													scanf("%d",&h);

													switch(h)
													{
														case 1 :
														
															printf("price is 600 rupees\n");

															printf("enter your name : ");
															scanf("%s",name);

															printf("enter your number : ");
															scanf("%lf",j);

															printf("enter choice : ");
															scanf("%d",&i);

															switch(i)
															{
																case 1 :
																	
																	printf("---------- BUS TICKET ----------\n");
																	
																	printf("%s",name);
																	
																	printf("%lf",i);
																	
																	tax = p*(18.00/100.00);

																	total = p + tax;

																	printf("your ticket payment is %d\n",total);

																	printf("-------------------------------------------\n");
															}
					 								}
					 						}
					 				}
					 		}
					}
	     	}	
	     }
	}
	     		
	     		
     getch();
}
