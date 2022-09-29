#include<stdio.h>
int pascal(int);
int comb(int,int);
int fact(int);
int main(){
    int line;
    printf("Enter the number(PASCAL tri): ");
    scanf("%d",&line);

    pascal(line);
    
    return 0;
}

int pascal(int line){
    int i,j,k,r;
    for (i = 1; i <= line; i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++){
            if (j>=line+1-i && j<=line-1+i && k)
            {
                printf("%2d ",comb(i-1,r));
                k=0;
                r++;
            }
            else{
                printf("   ");
                k=1;
            }
            
        }
        printf("\n");
    }
}

int comb(int n,int r){
    int c;
    c=fact(n)/fact(r)/fact(n-r);
    return c;
}

int fact(int a){
    
    int i,fact=1;

    for (i = 1; i <= a; i++)
        fact*=i;
    return fact;    
}