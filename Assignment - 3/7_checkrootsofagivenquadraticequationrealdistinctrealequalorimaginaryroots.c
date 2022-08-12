/*
check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots
*/

#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float d,r1,r2;

    printf("\n\nFind roots of a quadratic equation, ax2+bx+c.\nThere will be 2 roots for given quadratic equation.\n");

    printf("\nEnter the Three number(a,b,c): ");
    scanf("%f %f %f",&a,&b,&c);

    d = b*b - 4*a*c;

    if (d>0)
    {
        r1 = -b + sqrt(d) / 2*a;
        r2 = -b-sqrt(d) / 2*a;
        printf("\nroot r1 = %f",r1);
        printf("\nroot r2 = %f",r2);
    }
    else if(d==0)
    {
        r1 = -b/2*a;
        r2 = -b/2*a;
        printf("\nroot r1 = %f",r1);
        printf("\nroot r2 = %f",r2);
    }
    else{
        printf("roots are imaginary");
    }
    
    return 0;
}