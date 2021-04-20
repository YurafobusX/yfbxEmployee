#include "Employees.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//#include <vld.h> // дополнение, для поска утечек памяти

int main() {
	Worker::plan = true;

	std::ifstream input;
	input.open("Data.txt");
	std::string first;
	int second;

	std::vector<Employee*> employees;

	while (input >> first >> second) {
		employees.push_back(EmployeesFactory(first[0], second));
	}

	int res = 0;

	for (auto i : employees) {
		res += i->salary();
	}

	std::cout << res;

	for (auto i : employees) {
		delete i;
	}

	return 0;
}