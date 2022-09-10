#include<stdio.h>
#include <stdlib.h>  
int main(){
    char ch;
    int fn,sn;


    printf("\na. Addition\n");
    printf("\nb. Subtraction\n");
    printf("\nc. Multiplication\n");
    printf("\nd. Division\n");
    printf("\ne. Exit\n");

    printf("\nEnter Above Choice: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
        printf("Enter Two numbers: ");
        scanf("%d%d",&fn,&sn);
        printf("Additions: %d",fn+sn);
        break;
    case 'b':
        printf("Enter Two numbers: ");
        scanf("%d%d",&fn,&sn);
        printf("Subtraction: %d",fn-sn);
        break;
    case 'c':
        printf("Enter Two numbers: ");
        scanf("%d%d",&fn,&sn);
        printf("Multiplication: %d",fn*sn);
        break;
    case 'd':
        printf("Enter Two numbers: ");
        scanf("%d%d",&fn,&sn);
        printf("Qustion is: %.2f",(float)fn/sn);
        break;
    case 'e':
        exit(0);
        break;
    
    default:
        printf("Ivalid Choice Please Check");
        break;
    }
    

    return 0;
}