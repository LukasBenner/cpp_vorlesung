// greetings.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "person.h"


int main()
{
    Person* person1 = new Person("Peter", Language::german);
    Person* person2 = new Person("John", Language::english);
    Person* person3 = new Person("Vladimir", Language::chinese);

    person1->greet(person2);

    person2->greet(person1);

    person3->greet(person1);
}

