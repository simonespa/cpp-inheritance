#include "Student.h"
using namespace Model;

Student::Student() : Person()
{
    code = 0;
}

Student::Student(string firstName, string lastName, int code) : Person(firstName, lastName)
{
    this->code = code;
}

int Student::getCode()
{
    return code;
}

void Student::setCode(int code)
{
    this->code = code;
}
