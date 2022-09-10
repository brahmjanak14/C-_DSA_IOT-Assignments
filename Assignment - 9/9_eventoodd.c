#include<stdio.h>

int main(){

    int x;

    printf("Enter the number: ");
    scanf("%d",&x);

    switch (x%2==0)
    {
    case 1:printf("even is %d next odd number is %d",x,x+1);
        break;
    case 0:printf("%d is odd number",x);
    }


    return 0;
}