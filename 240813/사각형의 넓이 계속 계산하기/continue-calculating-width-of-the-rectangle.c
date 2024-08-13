#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c;

    while (1) {
        scanf("%d %d %c", &a, &b, &c);
        if (c == 'C') {
            printf("%d\n", a*b);
            break;
        }
        printf("%d\n", a*b);
    }
    return 0;
}