#include <stdio.h>

int main(){
    int n=1, r;
    printf("Number of rows: ");
    scanf("%d", &r);
    for(int i=1; i<r; i++){
        for(int j=1; j<=i;j++){
            printf("%d ", n);
            ++n;
        }
        printf("\n");
    }
    return 0;
}