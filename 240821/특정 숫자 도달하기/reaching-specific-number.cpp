#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sumNum = 0;
    double cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            cout << sumNum << " ";
            cout << fixed;
            cout.precision(1);
            cout << sumNum / cnt;
            break;
        }
        sumNum += arr[i];
        cnt += 1;

        if (i == 9) {
            cout << sumNum << " " << double(sumNum) / cnt;
        }
    }

    return 0;
}