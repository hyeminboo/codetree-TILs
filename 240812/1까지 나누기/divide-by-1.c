#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i = 1, cnt = 0;
    scanf("%d", &n);

    while (1) {
        n = n / i;
        cnt++;
        i++;
        if (n <= 1) {
            printf("%d", cnt);
            break;
        }
    }
    return 0;
}