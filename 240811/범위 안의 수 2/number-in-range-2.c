#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, cnt = 0;
    for (int i = 1; i <= 10; i++) {
        int n;
        scanf("%d", &n);
        if (n >= 0 & n <= 200) {
            sum += n;
            cnt++;
        }
    }

    printf("%d %.1lf", sum, (double)sum/cnt);
    return 0;
}