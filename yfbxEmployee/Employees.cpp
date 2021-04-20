#include "Employees.hpp"

int Worker::salary() {
	return plan ? (int)40000 : (int)40000*(0.75);
};

void Traider::setSales(int in) {
	sales = in;
};

int Traider::salary() {
	return 20000 + (int)(0.05 * 500 * sales);
};


Employee* EmployeesFactory(char code, int sales) {
	if (code == 'W') {
		return new Worker;
	} else 
		if (code == 'T') {
			return new Traider(sales);
		}
		else {
			return nullptr;
		}
};

bool Worker::plan = true;