// chap.4-3 포인터
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* x_ptr;
    x_ptr = &x;

    cout << "X값:" << x << endl;
    cout << "X_ptr:" << x_ptr << endl;
    cout << "X_ptr ->:" << *x_ptr << endl;

    return 0;
}
