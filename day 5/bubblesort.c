#include <stdio.h>

int main(){
    int temp, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Please enter the elements of the array \n");
    for(int i=0; i<size; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nEntered Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    printf("\nSorted Array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\nThank you for using the program!\n\n");
    return 0;
}