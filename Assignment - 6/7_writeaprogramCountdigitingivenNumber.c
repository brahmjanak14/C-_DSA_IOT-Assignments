#include<stdio.h>

int main(){
    int i,no=105078,count=0;

    printf("\n Calculate digit Count \n\n");

    for(i=no;i!=0;){
       count++;    
       i=i/10;
    }
    printf("%d No is Digit is %d",no,count);

    return 0;
}