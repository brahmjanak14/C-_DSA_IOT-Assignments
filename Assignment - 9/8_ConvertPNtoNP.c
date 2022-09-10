#include<stdio.h>

int main(){

    int x,cn;

    printf("Enter the number: ");
    scanf("%d",&x);

    switch (x>0)
    {
    case 1: cn = -x;
    printf("%d is conver Nagative %d",x,cn);
        break;
    case 0: cn = x;
    printf("%d is conver Positive %d",x,(cn*=-1));
        break;
    }

    return 0;
}