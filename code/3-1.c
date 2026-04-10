#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int *ptr = arr[0];
    for(int i = 0; i < 6; i++) {
        printf("%d ", ptr[i]);
        if ((i+1) % 3 == 0) printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", ptr[i]);
        if ((i+1) % 3 == 0) printf("\n");
    }
    printf("\n");
    ptr[3] = 0;
    ptr[4] = 0;
    ptr[5] = 0;
    for(int i = 0; i < 6; i++) {
        printf("%d ", ptr[i]);
        if ((i+1) % 3 == 0) printf("\n");
    }
    printf("\n");
    ptr[2] = 0;
    for(int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    return 0;
}