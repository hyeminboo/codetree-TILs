#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[100];
    int j = 99, cnt = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            arr[j] = a;
            j--;
            cnt++;
        }
    }

    for (int i = (100-cnt); i < 100; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}