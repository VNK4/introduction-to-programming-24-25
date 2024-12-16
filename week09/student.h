// #pragma once

#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    char fn[11];
    char firstName[32];
    char lastName[32];

    unsigned age = 0;
    unsigned grade = 0;

    void printStudent();
};

#endif