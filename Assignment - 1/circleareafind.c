/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/

#include<stdio.h>

int main()
{
    float R,A;
    printf("Enter the radius of circle: ");
    scanf("%f",&R);
    A = 3.14 * R * R;
    printf("Area of The Circle is: %f",A);
    return 0;
}

