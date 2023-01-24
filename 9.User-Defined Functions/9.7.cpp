/* FUNCTIONS WITH ARGUMENTS BUT NO RETURN VALUES **/
#include<stdio.h>
main()
{

float principal, inrate; int period;

printf("Enter principal amount, interest"); 
printf(" rate, and period \n");

printline('Z');

scanf("%f %f %d", &principal, &inrate, &period);

value(principal, inrate, period); printline('C');
printline(ch) 
char ch;

int i; 
for(i=1; i <= 52; i++) 
printf("%c",ch);

printf("\n");

value(p,r,n)

int n;

float p,r;

int year;

float sum;

sum = p;

year = 1;

while(year <=n)
 {
sum = sum*(1+r);

year = year +1;

}

printf("%f\t%f\t%d\t%f\n",p,r,n,sum);
}
