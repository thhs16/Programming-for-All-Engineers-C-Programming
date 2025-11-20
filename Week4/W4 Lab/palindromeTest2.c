// Name : Thae Htape Htar San
// ID : 68070503468

#include <stdio.h>

int main(){
        // So we have to differentiate odd and even first.

        int arr_odd[] = {10, 20, 30, 40, 50};
        int size_odd = sizeof(arr_odd) / sizeof(arr_odd[0]);
        

        // printf("%d\n%d\n%d",arr_odd, size_odd, arr_odd[0]); // arr_odd = 178255952 // a raw memory
        // printf("%p", (void*)arr_odd); //10000000962a9ffaa0 - address

        printf("Middle element of odd array: %d\n", arr_odd[size_odd / 2]);
        

        int arr_even[] = {10,20,30,40};
        int size_even = sizeof(arr_even) / sizeof(arr_even[0]);

        printf("Middle elements of even array: %d and %d\n", arr_even[(size_even / 2)-1], arr_even[size_even / 2]);
        return 0;
}