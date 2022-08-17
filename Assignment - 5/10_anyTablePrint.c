#include<stdio.h>

int main(){
    int no,i;

    printf("\nEnter number any table print: ");
    scanf("%d",&no);

    for (i = 1; i <=  10; i++)
    {      
        printf("%d %d %d\n",no,i,i*no);
    }
    
    return 0;
}