// chap.2-2 함수 오버로딩
#include <iostream>

using namespace std;

int intPlus(int x, int y);
float intPlus(float x, float y);

int main() {
    int k = intPlus(99, 101);
    int i = intPlus(99.9f, 101.2f);
    cout << k << endl;
    cout << (float)i << endl;
    return 0;
}

int intPlus(int x, int y){
    return x+y;
}

float intPlus(float x, float y){
    return x + y;
}