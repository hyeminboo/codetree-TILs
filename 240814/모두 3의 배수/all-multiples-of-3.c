#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    bool con = true;

    for (int i = 1; i <= 5; i++) {
        scanf("%d", &a);
        if (a % 3 != 0) {
            con = false;
            break;
        }
    }

    if (con == true) printf("1");
    else printf("0");
    
    return 0;
}