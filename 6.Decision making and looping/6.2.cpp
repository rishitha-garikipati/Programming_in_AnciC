//EXAMPLE OF while STATEMENT
#include<stdio.h>
main()
{
 
int count, n; 
float x,y;
y = 1.0; 
count = 1;
printf("Enter the values of x and n: "); 
scanf("%f %d", &x, &n); 
while (count <<= n) 
{
y = y*x; 
count++;
} 
 printf(" x = %f; n = %d; x to power n = %f n",x,n,y);
}
