#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace Model;

class Student : public Person
{
public:
    Student();
    Student(string firstName, string lastName, int code);
    int getCode();
    void setCode(int code);

private:
    int code;
};

#endif /* STUDENT_H */
