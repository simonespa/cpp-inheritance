#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

namespace Model
{

    class Person
    {
    public:
        Person();
        Person(string firstName, string lastName);
        virtual string getFirstName();
        virtual void setFirstName(string firstName);
        virtual string getLastName();
        virtual void setLastName(string lastName);

    private:
        string firstName;
        string lastName;
    };

} // namespace Model

#endif /* PERSON_H */
