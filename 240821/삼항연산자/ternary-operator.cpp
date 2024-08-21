#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int score;
    cin >> score;

    string test = score == 100 ? "pass" : "failure";

    cout << test;
    return 0;
}