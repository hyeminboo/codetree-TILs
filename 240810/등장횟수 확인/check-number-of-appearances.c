#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num, cnt = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            cnt += 1;
        }
    }

    printf("%d", cnt);
    return 0;
}