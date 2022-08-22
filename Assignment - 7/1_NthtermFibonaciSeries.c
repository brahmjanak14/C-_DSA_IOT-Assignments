#include<stdio.h>

int main(){
    int a=-1,b=1,c,i;

    printf("\n Nth number Fibonacci Series\n\n");

    for(i=1;i<10;i++){    
        
        c=a+b;
        
        printf("%d ",c);
        
        a=b;
        b=c;

        
    }

    return 0; 
}