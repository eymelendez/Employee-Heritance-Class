// ProductionWorker.cpp

#include<iostream>
#include<string>

#include"Employee.h"
#include"ProductionWorker.h"

using namespace::std;

ProductionWorker::ProductionWorker(string productionWorkerName, int productionWorkerNumber, 
		string productionWorkerHireDate, int productionWorkerShift, double productionWorkerHourlyPayRate) 
		: Employee(productionWorkerName, productionWorkerNumber, productionWorkerHireDate)
{
	shift = productionWorkerShift;
	hourlyPayRate = productionWorkerHourlyPayRate;
}

ProductionWorker::~ProductionWorker()
{
	// cout << "Destroying object...\n";
}

double ProductionWorker::getHourlyPayRate()
{
	return hourlyPayRate;
}

void ProductionWorker::setShift(int aShift)
{
	shift = aShift;
}

int ProductionWorker::getShift()
{
	return shift;
}
