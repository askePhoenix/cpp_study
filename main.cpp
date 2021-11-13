// chap.1-6 반복문
#include <iostream>

using namespace std;

int main() {

    for (int i = 0; i < 10; ++i) {
        cout << i + 1 << "입니다." << endl;
    }
    // 별찍기 / 정사각형 / 직삼각형 / 이등변 삼각형
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
