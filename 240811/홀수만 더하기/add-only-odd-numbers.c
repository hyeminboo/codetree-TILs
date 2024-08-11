#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num % 2 == 1 & num % 3 == 0) {
            sum += num;
        }
    }
    printf("%d", sum);
    return 0;
}