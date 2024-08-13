#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 1) {
            printf("John\n");
        }
        if (n == 2) {
            printf("Tom\n");
        }
        if (n == 3) {
            printf("Paul\n");
        }
        if (n == 4) {
            printf("Sam\n");
        }
        if (n >= 5) {
            printf("Vacancy\n");
            break;
        }
    }
    return 0;
}