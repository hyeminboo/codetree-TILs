#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2, c3;
    int t1, t2, t3;
    scanf("%c %d %c %d %c %d", &c1,&t1,&c2,&t2,&c3,&t3);
    if (c1 == 'Y' && t1 >= 37) {
        if (c2 == 'Y' && t2 >= 37 || c3 == 'Y' && t3 >= 37) {
            printf("E");
        } else {
            printf("N");
        }
    } else if ((c2 == 'Y' && t2 >= 37) && (c3 == 'Y' && t3 >= 37)) {
        printf("E");
    } else {
        printf("N");
    }
    return 0;
}