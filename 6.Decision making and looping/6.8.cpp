//USE OF break IN A PROGRAM
#include<stdio.h>
main()
{
int m;
float x, sum, average;
printf("This program computes the average of a set of numbers\n");
printf("Enter values one after another\n"); 
printf("Enter a NEGATIVE number at the end. \n\n");
sum = 0;
for (m = 1; m <= 1000; ++m)
{
scanf("%f", &x);
if (x < 0) break;
sum += x;
}
average= sum/(float)(m-1); 
printf("\n");
printf("Number of values=%d\n", m-1);
printf("Sum= %f\n", sum);
printf("Average=%f\n", average);
}
