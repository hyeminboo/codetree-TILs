#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, mul = 1;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        mul *= 2;
        if (mul == n) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}