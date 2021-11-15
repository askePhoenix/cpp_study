// 심화 : class 파일로 분리 -> free Character
#include <iostream>
#include "common.h"
#include "Character.h"
using namespace std;


int main() {
    Character mario;
    mario.setName("super Mario");
    mario.obtainItem();

    cout << mario.getHp() << endl;
    cout << mario.getName() << endl;

    Character timo = Character(10);
    timo.setName("timo");

    cout << timo.getHp() << endl;
    cout << timo.getName() << endl;


    return 0;
}
