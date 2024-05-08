#include "pch.h"
#include "Student.h"

Student::Student()
{
}

Student::Student(int id, string name)
{
	Person::Person(id, name);
}

void Student::set_std_regNo(int regNo)
{
	this->std_regNo = regNo;
}
void Student::set_std_fatherName(string fatherName)
{
	this->std_fatherName = fatherName;
}

int Student::get_std_regNo()
{
	return std_regNo;
}
string Student::get_std_fatherName()
{
	return std_fatherName;
}

