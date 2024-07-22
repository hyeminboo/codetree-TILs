#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int book = 3000, mask = 1000, n;
    scanf("%d", &n);
    if (n >= book) {
        printf("book");
    } else if (n >= mask) {
        printf("mask");
    } else {
        printf("no");
    }
    return 0;
}