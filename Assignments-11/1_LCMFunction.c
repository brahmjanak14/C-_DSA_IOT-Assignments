#include<stdio.h>
int LCM(int,int);
int main(){
    int a,b;

    printf("\nFIND LEAST COMMON MULTIPLICATION (LCM)\n");
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);

    printf("LCM: %d",LCM(a,b));
    return 0;
}

int LCM(int a, int b){
    int L;

    for (L = a>b?a:b; L <= a*b; L=L+(a>b?a:b))
        if (L%a==0 && L%b==0)
            break;
        
    return L;
}