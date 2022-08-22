#include<stdio.h>

int main()
{
    int i,j,flag;

    printf("\nprint all Prime numbers under 100\n");

    for (i = 2; i <= 100; i++)
    {

        flag=0;    

        for (j=1;j<=i;j++)
        {
            if (i%j == 0)
                flag++;
            
        }
        if (flag==2)
            printf("%d ",i);        
    }

    return 0;
}