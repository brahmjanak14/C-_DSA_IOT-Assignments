//1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float AreaofCircle(float);

int main(){

    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    
    printf("Area of Circle: %.3f",AreaofCircle(r));    

    return 0;
}

float AreaofCircle(float r){
    
    return 3.14 * (r * r);
}