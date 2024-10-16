#include<stdio.h>

void bubbleSort(int arr[], int size);

int main(){
    int arr[] = {7, 5, 6, 3, 4, 2, 1};
    bubbleSort(arr, 7);
    for(int i = 0; i < 7; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j + 1] < arr[j]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}