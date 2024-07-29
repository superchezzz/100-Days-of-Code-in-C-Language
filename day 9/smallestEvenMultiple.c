#include<stdio.h>

int smallestEvenMultiple(int n) {
    while(n%2!=0){
        n+=n;
    }
    return n;
}

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    int multi=smallestEvenMultiple(n);
    printf("%d", multi);

    return 0;
}
