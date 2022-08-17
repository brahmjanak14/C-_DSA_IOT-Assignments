#include<stdio.h>

int main(){
    int i,no=60,count=0;

    printf("\n Calculate digit Count \n\n");

    for(i=1;i<=no;i++){
        if(no%i==0)
            count++;    
    }

    if(count == 2)
        printf("%d is Prime Number",no);
    else
        printf("%d is Not Prime Number",no);

    return 0;
}