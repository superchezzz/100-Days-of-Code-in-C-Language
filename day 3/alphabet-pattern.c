#include <stdio.h>

int main(){

    int row;

    printf("Number of rows: ");
    scanf("%d", &row);

    for(int i=0; i<row; i++){
        char letter='A';
        for(int j=0; j<i; j++){
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}