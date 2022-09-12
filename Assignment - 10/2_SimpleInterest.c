#include<stdio.h>

float SI(float,float,float);

int main(){

    //S.I. = P × R × T
    
    float p,r,t;

    printf("Enter the the 3 Numbers: ");
    scanf("%f%f%f",&p,&r,&t);

    printf("Simple Interest: %.2f",SI(p,r,t));

    return 0;
}

float SI(float p,float r, float t){
    
    
    return p*r*t/100;
}

/* Simple interest is calculated with the following formula: S.I. = P × R × T, where P = Principal, R = Rate of Interest in % per annum, and T = Time, usually calculated as the number of years. The rate of interest is in percentage r% and is to be written as r/100. */