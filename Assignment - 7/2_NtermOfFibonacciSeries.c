#include<stdio.h>

int main(){
    long a=1,b=0,c,no,i;

    printf("\nFibonacci Series\n\n");
    printf("Enter the number: ");
    scanf("%d",&no);


    for(i=1;i<no;i++){    
        
        c=a+b;
        
        printf("%d ",c);
        
        a=b;
        b=c;  
    }

    return 0; 
}