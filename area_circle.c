#include <stdio.h>
//Defining the value of pi upto 6 decimal places
#define pi 3.141592
int main()
{
    float radius;
    printf("Enter Radius of Circle:\n");
    scanf("%f",&radius);
 
    // Calculate the area of the circle
    float area=pi*radius*radius;
 
    // Print the area of the circle, rounded to two decimal places
    printf("The area of Circle with radius %0.2f is: %0.2f",radius,area);
    return 0;
}
