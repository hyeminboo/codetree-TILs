#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        if ((num % 2 != 0) & (num % 3 == 0)) {
            printf("%d\n", num);
        }
    }
    return 0;
}