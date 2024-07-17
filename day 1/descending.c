// C Program that would input 3 integers and display it in descending order
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers separated with space: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>=b && a>=c) {
        if (b>=c) {
            printf("Output: %d %d %d", a, b, c);
        } else {
            printf("Output: %d %d %d", a, c, b);
        }
    } else if (b>=a && b>=c) {
        if (a>=c) {
            printf("Output: %d %d %d", b, a, c);
        } else {
            printf("Output: %d %d %d", b, c, a);
        }
    } else {
        if (a>=b) {
            printf("Output: %d %d %d", c, a, b);
        } else {
            printf("Output: %d %d %d", c, b, a);
        }
    }
}