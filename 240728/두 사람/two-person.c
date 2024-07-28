#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char c, d;
    scanf("%d %c %d %c",&a, &c, &b, &d);
    if ((a >= 19 && c == 'M') || (b >=19 && d == 'M')) {
        printf("1");
    }
    return 0;
}