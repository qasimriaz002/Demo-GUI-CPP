#pragma once
#include "Person.h"

using namespace std;

class Student : public Person
{
public:
	int std_regNo;
	string std_fatherName;

	Student();

	Student(int id, string name);

	void set_std_regNo(int regNo);
	void set_std_fatherName(string fatherName);

	int get_std_regNo();
	string get_std_fatherName();


};

