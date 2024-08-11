#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0;
    int start, end;

    scanf("%d %d", &a, &b);

    if (a <= b) {
        start = a; end = b;
    } else {
        start = b; end = a;
    }

    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}