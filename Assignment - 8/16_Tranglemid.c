#include<stdio.h>

int main(){
    int i,j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {        
            if (i==6-j || i==5 || i+4==j)
                printf("*");     
            else
                printf(" ");
        }
           
        printf("\n");
    }
    
    return 0;
}