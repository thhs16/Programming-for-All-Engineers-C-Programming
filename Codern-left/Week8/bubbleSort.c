#include <stdio.h>
#define MAX 9

    void swap(int* x, int* y) {
        
    }

    void print (int arr[], int num){

        for (int i=0; i < num; i++){
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

int main(){

        int arr[MAX] = { 9, 8, 7, 6, 5, 4, 3, 2, 1}; // I love the way Ajan write this array with the space
        
        print(arr, MAX);

        for(int i=0;    i < MAX;    i++){
            for(int i=0;    i < MAX;    i++){
                if (arr[j] > arr[j+1]){
                    swap( &arr[j], &arr[j+1]); // why do we need amason
                }
            }
        }

        return 0;
}