/*
13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.
*/
/*
3. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right.
*/

#include<stdio.h>

int main(){
    int no,ans;

    printf("Enter the no: ");
    scanf("%d",&no);

    ans = no % 10 * 100 + no / 10;

    printf("\nEnter no is %d after rotate is %d",no,ans);

    return 0;
}