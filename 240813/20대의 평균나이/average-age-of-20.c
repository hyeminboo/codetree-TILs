#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age, sum = 0, cnt = 0;

    while (1) {
        scanf("%d", &age);
        if (20 <= age && age < 30) {
            sum += age;
            cnt++;
        } else {
            printf("%.2lf", (double)sum/cnt);
            break;
        }
    }
    return 0;
}