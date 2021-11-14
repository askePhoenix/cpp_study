// chap.4-3 포인터 -> swap
#include <iostream>
#include "common.h"
using namespace std;


int main() {
    int x = 999;
    int y = 1313;

    swap(&x, &y);
    cout << x << " / " << y << endl;

    return 0;
}
