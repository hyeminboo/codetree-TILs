#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    string cmd;
    int n, num;
    cin >> n;

    while (n--) {
        cin >> cmd;
        if (cmd == "push_back") {
            cin >> num;
            v.push_back(num);
        } else if (cmd == "get") {
            cin >> num;
            cout << v[num-1] << "\n";
        } else if (cmd == "pop_back") {
            v.pop_back();
        } else if (cmd == "size") {
            cout << v.size() << "\n";
        }
    }
    return 0;
}