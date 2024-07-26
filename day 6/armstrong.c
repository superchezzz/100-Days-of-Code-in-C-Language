#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, armstrong=0;;
    printf("Please enter a number: ");
    scanf("%d", &num);

    int a=num;
    while(a!=0){
        int temp=0;
        temp=a%10;
        armstrong+= temp*temp*temp;
        a=a/10;
    }

    if(num==armstrong){
        printf("%d is an Armstrong number. ", num);
    }else{
        printf("%d is not an Armstrong number", num);
    }
    printf("\nThank you for using the program.\n");
    system("PAUSE");
    system("cls");
    return 0;
}