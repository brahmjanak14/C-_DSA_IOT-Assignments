/*
6. Write a program to print greater between two numbers. Print one number of both are 
the same
*/

#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Two Number X Y= ");
    scanf("%d%d",&x,&y);

    if (x>y)
    {
        printf("X is Grater %d",x);
    }
    else{
        if(y>x){
            printf("Y is grater %d",y);
        }
        else{
            printf("Both are Same %d %d",x,y);
        }
    }
    

}