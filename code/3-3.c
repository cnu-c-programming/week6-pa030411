#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%p\n", (void *)&arr);
    printf("%p\n", (void *)&arr[0]);
    printf("%p\n", (void *)&arr[0][0]);
    printf("\n");

    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(arr[0]));
    printf("%zu\n", sizeof(arr[0][0]));

    return 0;
}
