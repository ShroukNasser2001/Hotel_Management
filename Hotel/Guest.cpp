#include "Guest.h"
#include<string>
void Guest::Name(string n)
{
	name = n;
}
string Guest::printName()
{
	return name;
}
void Guest::Username(string u)
{
	username = u;
}
string Guest::printusername()
{
return username;
}
void Guest::Password(string p)
{
	password=p;
}
string Guest::printpassword()
{
	return password;
}
void Guest::Age(int a)
{
	age = a;
}
int Guest::printage()
{
	return age;
}
void Guest::ID(int i)
{
	id = i;
}
int Guest::printid()
{
	return id;
}
