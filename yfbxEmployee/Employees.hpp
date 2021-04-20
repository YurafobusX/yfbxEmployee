#pragma once

class Employee {
public:
	virtual int salary() = 0;
};

class Worker : public Employee  {
public:
	static bool plan;
	int salary();
};

class Traider : public Employee {
private:
	int sales;

public:
	Traider(int sale) : sales(sale){};
	int salary();
	void setSales(int);
};

Employee* EmployeesFactory(char code, int sales = -1);