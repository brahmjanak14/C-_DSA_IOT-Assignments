#include<stdio.h>

int main(){
    int i,j,k=1;

    for (i = 1; i <= 4; i++)
    {
        
        for (j = 1; j <= 7; j++)
        {
         if(j<=5-i || j>=3+i){
                
                printf("%d",k);

                j<4?k++:k--;
            }
            else
                printf(" ");
                if(j==4 && i==2)
                    k--;
                if(j==4 && i==3)
                    k=2;
                if(j==4 && i==4)
                    k=1;
                
        }
        printf("\n");
        k=1;
    }
    
    return 0;
}