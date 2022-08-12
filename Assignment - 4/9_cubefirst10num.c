/*
9. Write a program to print cubes of the first 10 natural numbers
*/

#include <stdio.h>

int main()
{
    int i = 1, cube;
    while (i <= 10)
    {
        cube = i * i * i;
        printf("%d ", cube);
        i++;
    }
    return 0;
}