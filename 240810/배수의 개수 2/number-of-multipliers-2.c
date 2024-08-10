#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i, num, cnt = 0;
    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 1) {
            cnt += 1;
        }
    }
    printf("%d", cnt);
    return 0;
}