#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, mul = 1;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= b; i++) {
        mul *= a;
    }

    printf("%d", mul);
    return 0;
}