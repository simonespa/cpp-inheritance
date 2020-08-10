#include "Person.h"
using namespace Model;

Person::Person()
{
    firstName = "";
    lastName = "";
}

Person::Person(string firstName, string lastName)
{
    this->firstName = firstName;
    this->lastName = lastName;
}

string Person::getFirstName()
{
    return firstName;
}

void Person::setFirstName(string firstName)
{
    this->firstName = firstName;
}

string Person::getLastName()
{
    return lastName;
}

void Person::setLastName(string lastName)
{
    this->lastName = lastName;
}
