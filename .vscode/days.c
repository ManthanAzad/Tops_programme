// Take the input from user in term of days and count year and months
// Take the input from user in term of Days Month and year 
// convert months in to days and year in to Months



#include<stdio.h>

void main()

{ int  td,y,m,d,years;

printf("Enter TD : ");

scanf("%d",&td);


 y = (td/365);
 m = (td/30);
printf("Enter year : ");

scanf("%d",&years); 
 d = (years*365);

 printf("Years = %d\n, Months = %d\n ,days = %d",y,m,d);


}


