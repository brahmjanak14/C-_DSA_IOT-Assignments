#include<stdio.h>

int main(){
    int month;

    printf("Enter the Month No(1-12): ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:printf("Jan-31 Days.");
        break;
    case 2:printf("Fab 28-29 Days.");
        break;
    case 3:printf("Mar-31 Days.");
        break;
    case 4:printf("Apr-30 Days.");
        break;
    case 5:printf("May-31 Days.");
        break;
    case 6:printf("Jun-30 Days.");
        break;
    case 7:printf("Jul-31 Days.");
        break;
    case 8:printf("Aug-31 Days.");
        break;
    case 9:printf("Sept-30 Days.");
        break;
    case 10:printf("Oct-31 Days.");
        break;
    case 11:printf("Nov-30 Days.");
        break;
    case 12:printf("Dec-31 Days.");
        break;
    
    default:
        printf("Enter Valid Number");
        break;
    }

    return 0;
}