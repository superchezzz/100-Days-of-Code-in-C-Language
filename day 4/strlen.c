#include<stdio.h>

int main(){
    int num=0;
    char st [100];

    //User Input
    printf("Input a string : ");
    fgets(st, sizeof(st), stdin);

    //Character counter
    for(int i=0; st[i]!='\0'; i++){
        if(st[i]!='\n'){
            num++;
        }
    }
    //Output printing
    printf("Number of characters: %d", num);

    return 0;
}