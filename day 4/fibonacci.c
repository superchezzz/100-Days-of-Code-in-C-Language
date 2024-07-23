#include<stdio.h>

int main(){
    int n; 
    //User input
    printf("Input number of terms to display : ");
    scanf("%d", &n);

    //Declaration of fibonacci variable
    int fibonacci[n];
    //Assigning the values for the 1st and 2nd term as it doesn't change
    fibonacci[0]= 0; 
    fibonacci[1]=1;

    for(int i=2; i<n; i++){
        fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
    }
    //Displaying the output
    printf("Here is the Fibonacci series upto to 10 terms :\n");
    for(int i=0; i<n; i++){
        printf("%d ", fibonacci[i]);
    }
    printf("\nThank you for using the program.\n");
    return 0;
}