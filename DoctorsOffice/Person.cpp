#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person()
{
	setName("No Data");
	setLastName("No Data");
	setdob("01/01/01");
}
Person::Person(string Name, string LastName, string DOB)
{
	this->firstName = Name;
	this->lastName = LastName;
	this->dob = DOB;
}
Person::Person(const Person & person)
{
	this->firstName = person.firstName;
	this->lastName = person.lastName;
	this->dob = person.dob;
}
Person::~Person()
{

}
void Person::setName(string Name)
{
	this->firstName = Name;
}
void Person::setLastName(string LastName)
{
	this->lastName = LastName;
}
void Person::setdob(string DOB)
{
	this->dob = DOB;
}
void Person::setNameAndLastName(string Name, string LastName)
{
	this->firstName = Name;
	this->lastName = LastName;
}
string Person::getName() const
{
	return this->firstName;
}
string Person::getLastName() const
{
	return this->lastName;
}
string Person::getdob() const
{
	return this->dob;
}
ostream & operator << (ostream & output, const Person & value)
{
	output << value.getName() << " " << value.getLastName() << " " << value.getdob();
	return output;
}
istream & operator >> (istream & input, Person & value)
{
	string firstname, lastname, DOB;
	cout << "Enter First Name: ";
	input >> firstname;
	cout << "Enter Last Name: ";
	input >> lastname;
	cout << "Enter Date of Birth: ";
	input >> DOB;
	value.setName(firstname);
	value.setLastName(lastname);
	value.setdob(DOB);
	return input;
}