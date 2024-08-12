#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i = 1, mul = 1;
    scanf("%d", &n);

    while (1) {
        mul *= i;
        if (mul >= n) {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}