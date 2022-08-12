/*
4. Write a program to print the first 10 odd natural numbers
*/

#include <stdio.h>

int main()
{
    int i, odd;
    for (i = 1; i <= 10; i++)
    {
        odd = i * 2 - 1;

        printf("%d\n", odd);
    }

    return 0;
}