// 심화 객체 접근 한정자 -> Character -> this pointer
#include <iostream>
#include "common.h"

using namespace std;

class Character {
public:
    Character();
    explicit Character(int hp);

public:
    int getHp() const;

    void setHp(int hp);

    int getSpeed() const;

    void setSpeed(int speed);

    const string &getName() const;

    void setName(const string &name);

private:
    int hp{};
    int speed{};
    string name;

public:

    void move(int dir);

    void jump();

    void hit();

    void speedUp();

    void obtainItem();
};
Character::Character(int _hp){
    hp = _hp;
}
Character::Character(){
    hp = 100;
}


void Character::speedUp() {
    speed++;
}

void Character::obtainItem() {
    speedUp();
}

int Character::getHp() const {
    return hp;
}

void Character::setHp(int hp) {
    this -> hp = hp;
}

int Character::getSpeed() const {
    return speed;
}

void Character::setSpeed(int speed) {
    this -> speed = speed;
}

const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    this -> name = name;
}

void Character::jump() {

}

void Character::move(int dir) {

}

void Character::hit() {

}

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
