#include<stdio.h>
void betweenPrime(int,int);
int main(){
    
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    betweenPrime(a,b);

    return 0;
}

void betweenPrime(int a,int b){
    int i,j,flag=0;

    for (i = a; i <= b; i++)
    {
        flag=0;
        for (j = 1; j <= i; j++)
        {
            if(i%j==0)
                flag++;
        }    
        if (flag==2)      
            printf("%d ",i);
    }
}