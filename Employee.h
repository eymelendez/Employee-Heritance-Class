#pragma once

// Employee.h

#pragma once
#include<iostream>
#include<string>

using namespace::std;

// Employee class
class Employee
{
public:
	Employee();
	Employee(string, int, string);
	string getEmployeeName();
	int getEmployeeNumber();
	string getHireDate();
	~Employee();

private:
	string name;
	int number;
	string hireDate;
};
