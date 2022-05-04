#pragma once
#include<string>
using namespace std;
class Login
{
private:
	string check="No",room;
	int day, salary;
public:
	void Check(string c);
	string printcheck();
	void Room(string r);
	string printroom();
	void Day(int d);
	int printday();
	void Salary(int d, string r);
	int printsalary();

};

