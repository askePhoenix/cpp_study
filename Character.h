//
// Created by 김주윤 on 2021/11/14.
//
#include <iostream>
#ifndef CPP_STUDY_CHARACTER_H
#define CPP_STUDY_CHARACTER_H
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



#endif //CPP_STUDY_CHARACTER_H
