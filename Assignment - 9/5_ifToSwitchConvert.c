#include<stdio.h>

int main(){
    int var;

    printf("Enter Your Number(1-3): ");
    scanf("%d",&var);

    switch (var)
    {
    case 1:printf("Good");
        break;
    case 2:printf("Better");
        break;
    case 3:printf("Best");
        break;
    
    default:printf("Invalid Number");
        break;
    }

    return 0;
}