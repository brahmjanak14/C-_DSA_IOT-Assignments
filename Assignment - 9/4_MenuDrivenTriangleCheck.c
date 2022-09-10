#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice,a,b,c;

    while (1)
    {
        printf("\n\n#####################################\n");
        printf("\n\nEnter your Choice\n");
        printf("\n1. To check Isosceles Triangle\n");
        printf("\n2. To check Right Angle Triangle\n");
        printf("\n3. To check Equilateral Triangle\n");
        printf("\n4. Exit\n");

        scanf("%d",&choice);

        printf("Enter 3 side of Triangle: ");
        scanf("%d%d%d",&a,&b,&c);

        switch (choice)
        {
            case 1:
                if (a==b || b==c || a==c)
                    printf("Isosceles Triangle");
                else    
                    printf("Not an Isosceles Triangle");
                break;
            case 2:
                if (a*a == b*b+c*c || b*b==a*a+c*c || c*c == a*a+b*b)
                    printf("Right Angle Triangle");
                else    
                    printf("Not a Right Angle Triangle");
                break;
            case 3:
                if ((a==b) && (b==c))
                    printf("Equilateral Triangle");
                else    
                    printf("Not a Equilateral Triangle");
                break;
            case 4:
                exit(0);
                break;
            
            default:
                break;
        }
    }
    return 0;
}