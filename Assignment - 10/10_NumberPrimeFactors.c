#include<stdio.h>
 
void PrimeFactor(int);
void Primefactor(int);

int main(){

	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	PrimeFactor(n);
	printf("\n");
	Primefactor(n);
	
	return 0;
}
void Primefactor(int n){
	int i;
	for (i = 2; n != 1; i++)
	{
		while (n%i==0)
		{
			n = n/i;
			printf("%d ",i);
		}
	}
}
void PrimeFactor(int n){
	int count=2,i;

	while (n!=1)
	{
		if (n%count==0){
			n=n/count;
			printf("%d ",count);
		}else
			count++;
	}	
}