#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a,&b);
    for (b; b>=a; b--) {
        printf("%d ", b);
    }
    return 0;
}