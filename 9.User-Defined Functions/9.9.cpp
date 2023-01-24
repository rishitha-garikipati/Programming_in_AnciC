//FUNCTIONS WITH ARGUMENTS AND RETURN VALUES 
#include<stdio.h>
main()

{

float principal, inrate, amount;

int period;

printf(" rate, and period \n"); 
scanf("%f %f %d", &principal, &inrate, &period);

printline ("*", 52);

printf("Enter principal amount, interest"); 
amount = value (principal, inrate, period); 
printf("\n%f\t%f\t%d\t%f\n\n", principal,inrate, period, amount);

printline('=',52);
}
printline(ch,len)

int len;
 char ch;
{
int i;

for(i=1;i<=len;i++) 
printf("%c",ch);

printf("\n");
}
value(p,r,n)

int n; 
float p,r;
{

int year;

float sum;

sum = p; 
year = 1; 
while(year <=n)

{

sum = sum * (1+r); 
year = year + 1;

}
return(sum)
}
