#include<stdio.h>

int main(){
    int a,b,i,max,min,j,flag;

    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);

    max = a>b?a:b;
    min = a<b?a:b;

    for (i=min; i<=max; i++)
    {
        flag=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
                flag++;
            
        }
        if (flag==2)
            printf("%d ",i);
    }
    
    return 0;
}