//Fig 1.6 A program using a user-defined function
/*PROGRAM USING FUNCTION 
 MAIN PROGRAM BEGINS*/
#include<stdio.h>
main()
{
	int a, b, c;
    a = 5;
    b = 10;
	c = mul(a,b);
    printf("Multiplication of %d and %d is %d",a,b,c);
}
/*MAIN PROGRAM ENDS 
MUL() FUNCTION STARTS*/
mul (x,y)
int p,x,y; 
/*ARGUMENT DECLARATIONS*/
{
    p = x*y; 
	return(p);
}
/*MUL() FUNCTION ENDS*/
	

