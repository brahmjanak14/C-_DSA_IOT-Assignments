#include<stdio.h>

int main()
{
    int n,i,t,r;

    printf("\n print all Armstrong numbers under 1000\n");

    for (i=1;i<=1000;i++)
    {
        t=0;
        n=i;
        while (n!=0)
        {
            r = n%10;
            t = t + r*r*r;
            n=n/10;
        }
        if(t == i)
            printf("%d\n",t); 
    }
    
    return 0;
}