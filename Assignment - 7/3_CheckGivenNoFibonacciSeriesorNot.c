#include<stdio.h>

int main(){
    int no,a=1,b=0,i,c;

    printf("\nGiven Number Fibonacci Series or Not\n\n");
    printf("Enter the number: ");
    scanf("%d",&no);

    for (i = 1;i<=100;i++)
    {
        if(no == c)
            break;
        c = a + b;

        a=b;
        b=c;
    }
    if (no == c)
        printf("%d is the Fobonacci Series Number ",no);
    else
        printf("%d is the Not Fobonacci Series Number ",no);
    
    return 0;
}