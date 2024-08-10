#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num, cnt1 = 0, cnt2 = 0;

    for (int i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num % 3 == 0) {
            cnt1 += 1;
        }
        if (num % 5 == 0) {
            cnt2 += 1;
        }
    }

    printf("%d %d", cnt1, cnt2);
    return 0;
}