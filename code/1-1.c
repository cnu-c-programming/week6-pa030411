#include <stdio.h>

int main() {
    int arr[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    int (*array_pointer)[5] = arr;
    int *pointer_array[5];
    for(int i = 0; i < 4; i++) {
        pointer_array[i] = arr[i];
    }
    printf("sizeof(array_pointer): %zu\n", sizeof(array_pointer));
    printf("sizeof(pointer_array): %zu\n", sizeof(pointer_array));
    for(int i = 0; i < 4; i++) {
        printf("%p\n", arr + i);
    }
    for(int i = 0; i < 2; i++) {
        printf("%p\n", &pointer_array[i]);
    }
    return 0;
}