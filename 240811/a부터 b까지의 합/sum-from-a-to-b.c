#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_num = 0;
    scanf("%d %d", &a, &b);
    for (a; a<=b; a++) {
        sum_num += a;
    }
    printf("%d", sum_num);
    return 0;
}