#include <stdio.h>
#define MAX 9

void swap(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
    //printf("In Function >>a = %d b = %d\n", *x, *y);
}

void print(int arr[], int num) {
    for (int i=0; i < num; i++) 
        printf("%-3d", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    print(arr, MAX);

    int key, j;
    for (int i=0; i < MAX; i++) {

        key = arr[i];

        for (int j=i-1;  j >= 0 && arr[j];     j--) {
            arr[j+1] = arr[j];
        }
    }
    

    return 0;
}