#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0, cnt = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        sum += a;
        cnt++;
    }

    printf("%d %.1lf", sum, (double)sum/cnt);
    return 0;
}