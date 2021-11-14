// chap.4-2 배열과 다중 배열
#include <iostream>
using namespace std;

struct Student{
    string name;
    int number;
    int age;
};

int main() {
    Student stu [10];

    stu[0].name = "철수 킴";
    stu[0].number = 90;
    stu[0].age = 30;

    cout << stu[0].name << " ";
}
