#include "pch.h"
#include "Person.h"

using namespace std;

Person::Person()
{
}

Person::Person(int p_id, std::string p_name) {
    this->p_id = p_id;
    this->p_name = p_name;
}

void Person::showData() {
    std::cout << "Name: " << p_name << std::endl;
    std::cout << "Id: " << p_id << std::endl;
}

string Person::getName()
{
    return p_name;
}

int Person::getId()
{
    return  p_id;
}

void Person::setp_id(int p_id)
{
    this->p_id = p_id;
}

void Person::setp_name(string p_name)
{
    this->p_name = p_name;
}

