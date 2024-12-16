#include <iostream>
#include "student.h"

void Student::printStudent() {
    std::cout << fn << ' ' << firstName << ' '
              << lastName << ' ' << age << ' ' << grade << std::endl;
}
