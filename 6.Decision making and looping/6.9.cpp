//EXAMPLE OF exit WITH goto STATEMENT
#define LOOP 100
#define ACCURACY 0.0001
#include<stdio.h>
main()
{
int n;
float x, term, sum;
scanf("%f", &x);
printf("Input value of x: "); 
sum = 0; 
end:
for (term =1, n = 1; n <= LOOP; ++n) 
{
sum += term;
if (term <= ACCURACY)
term *= x; 
}
printf("\nFINAL VALUE OF N IS NOT SUFFICIENT\n");
printf("TO ACHIEVE DESIRED ACCURACY \n");
goto end;
}
