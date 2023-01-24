//FUNCTIONS WITH NO ARGUMENTS, NO RETURN VALUES
#include<stdio.h>

main() 
{
printline();
value();
printline();
}
//Function1: printline( )

printline()
/* contains no arguments */
{
int i;
for(i=1; i <= 35; i++) 
printf("%c",'-'); 
printf("\n");
}

//Function2: value()
value() 
/* contains no arguments */

{

 int year, period;

float inrate, sum, principal;

printf("Principal amount?"); 
scanf("%f",&principal);

printf("Interest rate? ");

int scanf("%f", &inrate); 
while(year <= period)

printf("Period?   ");
scanf("%d", &period); 
sum = principal;

year =1; 

sum = sum *(1+inrate);

year = year + 1;

}

printf("\n%8.2f %5.2f ] % 12.2f\n". principal, inrate, period, sum);

}

