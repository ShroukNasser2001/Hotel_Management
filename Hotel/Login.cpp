#include "Login.h"
#include<string>
void Login::Check(string c)
{
	check = c;
}
string Login::printcheck()
{
	return check;
}
void Login::Room(string r)
{
	room = r;
}
string Login::printroom()
{
	return room;
}
void Login::Day(int d)
{
	day = d;
}
int Login::printday()
{
	return day;
}
void Login::Salary(int d, string r)
{
	if (r=="single")
	{
		salary = d * 500;

	}
	else if (r == "double")
	{
		salary = d * 1000;
	}
	else if(r=="trible")
	{
		salary = d * 1500;
	}
}
int Login::printsalary()
{
	return salary;
}
