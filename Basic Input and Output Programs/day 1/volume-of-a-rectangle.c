#include <stdio.h>

int main(){
    int v, l, w, h;
    printf("Enter the length of the rectangular box: ");
    scanf("%d", &l);
    printf("Enter the width of the rectangular box: ");
    scanf("%d", &w);
    printf("Enter the height of the rectangular box: ");
    scanf("%d", &h);

    v=l*w*h;
    printf("Volume: %d\n\n", v);
    printf("Thank you for using the program!\n\n");
    return 0;
}