/*11. WAP to take time as an input in below given format and convert the time format and
display the result as given below.*/

#include<stdio.h>

int main(){
    int HH,MM;
    
    printf("Hour and Minute(HH:MM)= ");
    scanf("%d:%d",&HH,&MM);

    printf("%d Hour and %d Minute",HH,MM);

    return 0;
}