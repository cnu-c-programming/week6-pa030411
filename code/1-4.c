#include <stdio.h>

int main() {
    int arr[4];
    double darr[6];
    long long ll;
    printf("%zu\n", sizeof(ll));
    printf("%zu\n", sizeof(darr));
    printf("%zu\n", sizeof(arr));
    printf("%zu\n", sizeof(arr[0]));
    printf("%p\n", &arr);
    printf("%p\n", &arr);
    printf("%p\n", &arr);
    printf("%d\n", 0);
    return 0;
}