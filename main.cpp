// chap.1-5 분기문
#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << to_string(number) + "는 짝수입니다." << endl;
    }
    return 0;
}
