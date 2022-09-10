#include<stdio.h>

int main(){
    int day;

    printf("Enter the week days(1-7): ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("You cannot believe in God until you believe in yourself.");
        break;
    case 2:
        printf("Arise, awake, stop not till the goal is reached.");
        break;
    case 3:
        printf("All the powers in the universe are already ours.");
        break;
    case 4:
        printf("I feel a very strong and divine aura in his presence. I feel at peace in his presence. I forget about all my worries and difficulties.");
        break;
    case 5:
        printf("To hell with circumstances; I create opportunities.");
        break;
    case 6:
        printf("As you think, so shall you become.");
        break;
    case 7:
        printf("Obey the principles without being bound by them.");
        break;
    
    default:
        printf("Please Enter only 1-7 week days");
        break;
    }

    return 0;
}