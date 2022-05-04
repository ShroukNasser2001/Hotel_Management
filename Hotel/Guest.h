#pragma once
#include<string>
using namespace std;
class Guest
{
private:
	string name, username, password;
	int age, id;
public:
	void Name(string n);
	string printName();
	void Username(string u);
	string printusername();
	void Password(string p);
	string printpassword();
	void Age(int a);
	int printage();
	void ID(int i);
	int printid();
	
};

