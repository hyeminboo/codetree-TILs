#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    double cnt = 0;

    cout << fixed;
    cout.precision(1);


    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            cout << sum << " " << sum/cnt;
            break;
        }
        sum += arr[i];
        cnt++;

        if (i == 9) {
            cout << sum << " " << sum/cnt;
        }
    }
    return 0;
}