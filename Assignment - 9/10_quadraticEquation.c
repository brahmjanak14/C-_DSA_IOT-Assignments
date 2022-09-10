#include<stdio.h>
#include<math.h>

int main(){
    
    int a,b,c,D,ans;

    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    D = (b*b) - (4*a*c);

    switch (D>0)
    {
    case 1: ans=-b+sqrt(b*b - 4*a*c)/2*a;
        printf("%d>0 is %d",D,ans);
        break;
    case 0:switch (D<0)
        {
        case 1: ans=-b/2*a+(sqrt(4*a*c - b*b)/2*a);
            printf("%d<0 is %d",D,ans);
            break;
            case 0: ans=-b/2*a;
            printf("%d<0 is %d",D,ans);
        }break;
    }

    return 0;
}