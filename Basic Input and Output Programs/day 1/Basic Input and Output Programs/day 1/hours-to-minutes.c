#include <stdio.h>

int main(){
    int hours, minutes;

    printf("Please enter a number of hour to convert: ");
    scanf("%d", &hours);

    minutes= hours*60;
    printf("%d hours is equal to %d minutes", hours, minutes);
    printf("Thank you for using the program!\n");
    return 0;

}

