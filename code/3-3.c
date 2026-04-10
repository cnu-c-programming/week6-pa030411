#include <stdio.h>

int main() {
    int arr[6];
    printf("%p\n", arr);
    printf("%p\n", arr);
    printf("%p\n", arr);
    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(arr) / 2);
    printf("%zu\n", sizeof(arr[0]));
    return 0;
}