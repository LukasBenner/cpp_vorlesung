#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string.h>
#include <random>


enum Gender
{
    male,
    female,
    diverse
};


struct Employee
{
    int ID;
    std::string firtstname;
    std::string lastname;
    int weight;
    Gender sex;
};


std::vector<std::string> female_names = { "Anna","Marie","Lena","Hilde","Petra","Martha" };
std::vector<std::string> male_names = { "Peter","Olaf","thomas","Dieter","Kevin","Klaus" };
std::vector<std::string> last_names = { "Stein", "Bantle", "Geiss", "Klausmann", "Kleikamp" };


std::vector<Employee> create_employees() {
    int number{ 5 };
    srand(time(NULL));
    std::vector<Employee>employees;

    for (int8_t i = 0; i < number; i++)
    {
        Gender sex;
        switch (rand() % 3) {
        case 0:
            sex = Gender::male;
            break;
        case 1:
            sex = Gender::female;
            break;
        default:
            sex = Gender::diverse;
        }
        int weight = rand() % 90;
        std::string first_name = sex == 0 ? male_names[rand() % male_names.size()] : female_names[rand() % female_names.size()];
        std::string last_name = last_names[rand() % last_names.size()];
        Employee emp = { i, first_name, last_name, weight, sex };
        employees.push_back(emp);
    }
    return employees;
}


void print_emloyees(std::vector<Employee> employees) {
    int number = 5;
    std::cout << std::endl << std::endl;
    for (int8_t i = 0; i < number; i++)
    {
        Employee emp = employees[i];

        std::string greeting = emp.sex == 0 ? "He" : emp.sex == 1 ? "She" : "Them";

        std::cout << "Employee " << emp.firtstname <<" " << emp.lastname<< " has ID " << emp.ID << std::endl;
        std::cout << greeting << " is " << emp.weight << "kg heavy" << std::endl << std::endl;
    }
}



int main()
{
    std::cout << "Hello World!" << std::endl;
    auto employees = create_employees();
    print_emloyees(employees);
}