//Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
#include <stdbool.h>

int containsDigit(int,int);

int main()
{
    int con,digit;

    printf("Enter the two number: ");
    scanf("%d%d",&con,&digit);

    printf("Contain Digit(or Not): %d",containsDigit(con,digit));

    return 0;
}
int containsDigit(int n,int d){
    
    int i,rem;

	for (i = n; i!=0; i/n)
	{
		rem = i%10;
		if(rem == d) return 1;
		i=i/10;
	}
	return 0;
}
