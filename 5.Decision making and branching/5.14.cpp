//RANGE OF NUMBERS
#include<stdio.h>
main()
{
    int count;
	float value, high, low, sum, average, range;
	sum = 0; count = 0;
	printf("Enter numbers in a line : input a NEGATIVE number to end \n");
	scanf("%f", &value);
	if (value < 0) 
	count =count + 1;
	if (count == 1) 
	high = low = value;
	else if (value> high)
	high = value; else if (value < low)
	low = value;
	sum = sum + value; 
	average = sum/count; range = high-low;
	printf("\n\n"); printf("Total values: %d\n", count);
	printf("Highest-value %f\nLowest-value %f\n", high, low); 
	printf("Range   : %f \nAverage   :%f\n",range, average);
}
