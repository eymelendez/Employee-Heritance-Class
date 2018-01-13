// Employee.cpp

#include<iostream>
#include<string>
#include"Employee.h"
using namespace::std;

Employee::Employee()
{
	name = " ";
	number = 0;
	hireDate = " ";
}

Employee::Employee(string EmployeeName, int EmployeeNumber, string EmployeeHireDate)
{
	name = EmployeeName;
	number = EmployeeNumber;
	hireDate = EmployeeHireDate;
}

string Employee::getEmployeeName()
{
	return name;
}

int Employee::getEmployeeNumber()
{
	return number;
}

string Employee::getHireDate()
{
	return hireDate;
}

Employee::~Employee()
{
	// cout << "Destroying object...\n";
}
