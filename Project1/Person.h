#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int p_id;
    string p_name;
public:
    Person();
    Person(int p_id, string p_name);
    void showData();
    string getName();
    int getId();
    void setp_id(int);
    void setp_name(string);
    void mango(string);

};
