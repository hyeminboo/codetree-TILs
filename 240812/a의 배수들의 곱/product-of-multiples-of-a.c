#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    int mul = 1;

    for (int i = 1; i <= b; i++) {
        if (i % a == 0) {
            mul *= i;
        }
    }

    printf("%d", mul);
    return 0;
}