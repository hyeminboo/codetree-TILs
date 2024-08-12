#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    int mul = 1;
    for (int i = a; i <= b; i++) {
        mul *= i;
    }

    printf("%d", mul);
    return 0;
}