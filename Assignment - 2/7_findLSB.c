/*7. Write a program to find the position of first 1 in LSB.*/

#include<stdio.h>
int main()
{
   int n;

   printf("Enter the number: ");
   scanf("%d",&n);

    if (n&1)
    {
        printf("Least Significant Bit %d set (1)",n);     
    }
    else
    {
        printf("Least Significant Bit %d unset (0)",n);
    }
    

    return 0;
}