#include<stdio.h>

int main(){
    int a,t,i,arm=0,mod;
    
    printf("\nGiven number Armstrong Check\n");
    printf("Enter Number: ");
    scanf("%d",&a);
    t = a;
    while(t){
        mod = t%10;
        arm = arm + mod*mod*mod;
        t=t/10;
    }

    if (a == arm)
        printf("%d is Armstrong Number",a);
    else
         printf("%d is not Armstrong Number",a);

    return 0;
}