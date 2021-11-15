//
// Created by 김주윤 on 2021/11/14.
//

#include "Character.h"

Character::Character(int _hp) {
    hp = _hp;
}

Character::Character() {
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
    this->hp = hp;
}

int Character::getSpeed() const {
    return speed;
}

void Character::setSpeed(int speed) {
    this->speed = speed;
}

const string &Character::getName() const {
    return name;
}

void Character::setName(const string &name) {
    this->name = name;
}

void Character::jump() {

}

void Character::move(int dir) {

}

void Character::hit() {

}

Character::~Character() {
    cout << "Character 삭제됩니다." << endl;
}
