#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double r,l;
    scanf("%lf %lf", &r,&l);
    if (r >= 1.0 && l >= 1.0) {
        printf("High");
    } else if (r >= 0.5 && l >= 0.5) {
        printf("Middle");
    } else {
        printf("Low");
    }
    return 0;
}