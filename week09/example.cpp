#include <iostream>

#include "student.h"

class StudentClass {
    char fn[11];
    char firstName[33];
    char lastName[32];

    unsigned age;
    unsigned grade;
};

// sizeof(Student1) = 16
struct Student1 {
    char a;
    int b;
    char c;
    int d;
};

// sizeof(Student2) = 12
struct Student2 {
    char a;
    char b;
    int c;
    int d;
};

// sizeof(Student3) = 16
struct Student3 {
    long a;
    char b;
};

int main() {
    Student st;
    StudentClass st4;
    // st4.age = 5; - грешка!

    st.age = 19;
    std::cout << sizeof(Student) << ' ' << sizeof(Student1) << ' ' << sizeof(Student2) << ' ' << sizeof(Student3) << std::endl;
    st.printStudent();
}