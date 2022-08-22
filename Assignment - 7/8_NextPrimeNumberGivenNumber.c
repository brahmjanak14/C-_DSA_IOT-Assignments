#include<stdio.h>

int main(){
    int x,i,flag=0,temp;

    printf("\nfind next Prime number of a given number\n\n");
    
    printf("Enter Number: ");
    scanf("%d",&x);

   temp = x+1;

    for (i = 2; i <=temp; i++)
    {
        if (temp%i==0){
            flag++;
        }     
        
    }
    
    if (flag == 1)
        printf("%d is next number %d is prime ",x,temp);
    else
        printf("%d is next number %d is Not prime ",x,temp);

}