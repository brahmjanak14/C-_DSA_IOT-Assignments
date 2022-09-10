#include<stdio.h>

int main(){
    int leap;

    printf("Enter a Year: ");
    scanf("%d",&leap);

    switch (leap%100 == 0)
    {
        case 1:
            switch(leap%400 == 0){
                case 1:printf("%d is Leap Year",leap);
                    break;
                case 0:printf("%d is Non leap year",leap);
                    break;
            }break;
        case 0:
            switch(leap%4 == 0){
                case 1:printf("%d is Leap Year",leap);
                    break;
                case 0:printf("%d is Non leap year",leap);
                    break;
            }break;
        
        default:printf("Invalid Year");
           break;
   
    }

    return 0;
}