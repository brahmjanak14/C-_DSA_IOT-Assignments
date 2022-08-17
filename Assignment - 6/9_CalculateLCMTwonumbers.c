#include<stdio.h>

int main(){
    int a,b,L,lcm;

    printf("\n Calculate LCM Two numbers \n\n");
    
    printf("Enter the Two number: ");
    scanf("%d %d",&a,&b);

    lcm = a>b?a:b;

    for(L=lcm;L<=(a*b);L=L + (a>b?a:b)){
        if(L%a==0 && L%b==0)
            break;
    }

    printf("%d %d Two number LCM is %d",a,b,L);

    return 0;
}