//Fig 1.7 Program using a math function
/*PROGRAM USING COSINE FUNCTION*/
#include<math.h> 
#include<stdio.h>
#define PI  3.1416
#define MAX 180
int main()
{
	int angle;
    float x,y;
    angle = 0;
    printf("     Angle      Cos(angle)\n\n");
    while(angle <= MAX) 
	{
    x = (PI/MAX)*angle;
    y = cos(x);
    printf("%15d %13.4f\n", angle, y);
    angle = angle + 10;
    }
}
	

