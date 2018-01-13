#pragma once

#include<iostream>
#include<string>
#include"Employee.h"
using namespace::std;

// Production Worker class (Sub-Class)
class ProductionWorker : public Employee // <--- Main Class
{
public:
	ProductionWorker(string productionWorkerName, int productionWorkerNumber, 
		string productionWorkerHireDate, int productionWorkerShift, 
		double productionWorkerHourlyPayRate);
	~ProductionWorker();

	double getHourlyPayRate();
	void setShift(int);
	int getShift();

private:
	int shift;
	double hourlyPayRate;
};