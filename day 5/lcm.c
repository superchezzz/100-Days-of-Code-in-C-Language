#include<stdio.h>

int main(){
    
    int n1,n2,lcm;
    printf("Input 1st number for LCM: ");
    scanf("%d", &n1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &n2);

    int num = n1;
    if(n2>num){
        num=n2;
    }

    while (1) {
        if (num%n1==0 && num%n2==0) {
            lcm = num;
            break;
        }
        num++;
    }

    printf("The LCM of %d and %d is : %d", n1, n2, lcm);
}