// chap.4 구조체
#include <iostream>
using namespace std;

struct Student{
    string name;
    int number;
    int age;
};

int main() {
    Student stu;

    stu.name = "철수 킴";
    stu.number = 90;
    stu.age = 30;

    cout << stu.name << " ";
}
