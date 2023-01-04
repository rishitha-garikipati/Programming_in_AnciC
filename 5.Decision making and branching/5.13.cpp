//USE OF goto STATEMENT
#include<stdio.h>
#include <math.h>
main()
{
    double x, y;
    int count;
    count = 1;
    printf("Enter FIVE real values in a LINE \n");
    scanf("%lf", &x);
    printf("\n"); 
	if (x < 0)
    printf("Item - %d is negative \n",count);
    else
    y = sqrt(x);
    printf("%lf \t %lf\n", x, y); 
    count = count + 1;
    if (count <= 5)
    printf("\nEnd of computation");
}
