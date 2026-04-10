#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5,6};
    for(int i = 0; i < 6; i++) {
        printf("%p\n", &arr[i]);
    }
    return 0;
}