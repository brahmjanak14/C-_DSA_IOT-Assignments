/*10. WAP to take date as an input in below given format and convert the date format anddisplay the result as given below.*/

#include<stdio.h>

int main(){
    int DD,MM,YYYY;

    printf("Enter the any Date: ");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);

    printf("Day-%d, Month-%d, Year-%d",DD,MM,YYYY);

    return 0;
}