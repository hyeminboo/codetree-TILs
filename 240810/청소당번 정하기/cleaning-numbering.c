#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0, day;
    scanf("%d", &day);

    for (int i = 1; i <= day; i++) {
        if (i % 36 == 0) 
            c += 1;
        else if (i % 24 == 0)
            c += 1;
        else if (i % 6 == 0) 
            b += 1;
        else if (i % 2 == 0)
            a += 1;
        else if (i % 3 == 0)
            b += 1;
        else if (i % 12 == 0)
            c += 1;
    }
    
    printf("%d %d %d", a, b, c);


    return 0;
}