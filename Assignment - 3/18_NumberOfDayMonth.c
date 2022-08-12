/*
18. Write a program which takes the month number as an input and display number of 
days in that month
*/

#include<stdio.h>

int main(){
    int mno;

    printf("\n\nmonth number as an input and display number of days in that month\n");
    printf("\nEnter the number Only(1 to 12): ");
    scanf("%d",&mno);


    if(mno == 1)
        printf("Jan Day 31");
    else if(mno == 2)
       printf("Feb Day 28/29");
    else if(mno == 3)
       printf("Mar 31");
    else if(mno == 4)
       printf("Apr 30");
    else if(mno == 5)
       printf("May 31");
    else if(mno == 6)
       printf("Jun 30");
    else if(mno == 7)
       printf("Jul 31");
    else if(mno == 8)
       printf("Aug 31");
    else if(mno == 9)
       printf("Sept 30");
    else if(mno == 10)
       printf("Oct 31");
    else if(mno == 11)
       printf("Nov 30");
    else if(mno == 12)
       printf("Dec 31");
    else
        printf("Please Enter the valid number only 1 to 12");
    return 0;
}