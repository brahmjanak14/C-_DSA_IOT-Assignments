/*
10. Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main(){
    int no,ans;
    
    printf("Enter the no: ");
    scanf("%d",&no);

    ans =no / 10 * 10;
    
    printf("Enter no is %d and last digit zero is no : %d ", no,ans);

    return 0;
}