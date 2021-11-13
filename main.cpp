// chap.2 함수 사용하기
#include <iostream>

using namespace std;

int plus1(int x);

int main() {
    int k = plus1(99);
    cout << k;
    return 0;
}

int plus1(int x){
    return x+1;
}