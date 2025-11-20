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
        print(arr, MAX-5);
        
        int key, j;

        
        for (int i=1; i < MAX; i++) {
            for (int j=i-1; j >= 0; j--) {
                
            }
        }
        
        return 0;
    }