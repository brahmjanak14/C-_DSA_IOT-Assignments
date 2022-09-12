#include<stdio.h>
void PrintNaturalNumbers(int);

int main(){

    int n;

    printf("Enter the numbers: ");
    scanf("%d",&n);

    PrintNaturalNumbers(n);

    return 0;
}

void PrintNaturalNumbers(int n){
    int i;
    for (i = 1; i <= n; i++)
        printf("%d ",i);   

}