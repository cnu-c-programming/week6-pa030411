#include <stdio.h>

int main() {
    char *names[5] = {"kim", "lee", "park", "choi", "jeong"};
    for(int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}