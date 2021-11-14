// chap.2-advance head, cpp 분리
#include <iostream>
#include "calc9.h"
using namespace std;


int intPlus(int x, int y);
float intPlus(float x, float y);

int main() {
    int k = intPlus(99, 101);
    int i = intPlus(99.9f, 101.2f);
    cout << k << endl;
    cout << (float)i << endl;

    cout << plus_9(13,24) << endl;
    return 0;
}

int intPlus(int x, int y){
    return x+y;
}

float intPlus(float x, float y){
    return x + y;
}
