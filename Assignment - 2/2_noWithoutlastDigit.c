#include<stdio.h>
int main(){
    int no,ldigit;

    printf("Enter the number: ");
    scanf("%d",&no);

    
   ldigit = no / 10;
    
    printf("Enter the no = %d,without last digit = %d ",no,ldigit);
        
    return 0;
}