// Main.cpp

#include<iostream>
#include<string>
#include<iomanip>

#include"Employee.h"
#include"ProductionWorker.h"

using namespace::std;

int main() {
	ProductionWorker PW("Edwin", 89139, "5/28/2017", 2, 22.50);

	cout << fixed << showpoint << setprecision(2);
	cout << "We have our newest employee named \n" << PW.getEmployeeName()
		<< " whose ID number is: " << PW.getEmployeeNumber() << " and will start working with us on \n" <<
		PW.getHireDate() << "\nand his hourly pay rate is: " << PW.getHourlyPayRate() << ". " << endl << endl;

	if (PW.getShift() == 1)
	{
		cout << "He works the day shift\n";
		cout << endl;
	}
	if (PW.getShift() == 2)
	{
		cout << "He works the night shift\n";
		cout << endl;
	}

	system("pause");
	return 0;

} // end main. 11 de mayo de 2017 - Successful! 