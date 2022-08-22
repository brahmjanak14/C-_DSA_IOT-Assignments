#include<stdio.h>

int main()
{
    float cp,sp,pp,lp,profit,loss;
    
    printf("\nProfit and Loss\n");
    printf("\nEnter the Two number: ");
    scanf("%d %d",&cp,&sp);

    profit = sp - cp;
    loss = cp - sp;

    if(profit > loss){
        pp = (profit/cp) * 100;
        printf("Profit Percentage is the: %.2f",pp);
    }
    else{
        lp = (loss/cp) * 100;
        printf("Loss Percentage is the: %.2f",lp);
    }

    return 0;
}