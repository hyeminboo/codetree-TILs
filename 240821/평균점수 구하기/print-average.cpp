#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[10];
    double sumNum;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sumNum += arr[i];
    }

    double avg = sumNum / 8;
    
    cout << fixed;
    cout.precision(1);
    cout << avg;
    
    return 0;
}