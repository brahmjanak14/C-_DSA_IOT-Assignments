#include<stdio.h>
int HCF(int,int);
int main(){

    int a,b;

    printf("\nHIGEST COMMON FACTORS (HCF) \n");
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);

    printf("HCF: %d",HCF(a,b));
    
    return 0;   
}

int HCF(int a, int b){
    int h;
    for (h = a<b?a:b; h >= 1; h--)
        if (a%h==0 && b%h==0)
            break;
    
    return h;
}