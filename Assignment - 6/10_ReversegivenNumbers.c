#include<stdio.h>

int main()
{
    int no=5892,i,rev=0,mod;

    for (i=no;i!=0;)
    {
        mod=i%10;
        rev=rev*10+mod;
        i=i/10;
    }
    printf("%d is Reverse Numbser %d",no,rev);


}