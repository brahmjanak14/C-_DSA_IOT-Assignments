//6. WAP to print the name of the user in double quotes.

#include<stdio.h>

int main()
{
    char str[20];

    printf("Enter your Name: ");
    scanf("%[^\n]s",str);
    printf("\"Hello %s",str);
    
    return 0;
}