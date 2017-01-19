#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person {
private:
	string firstName;
	string lastName;
	string dob;
public:
	Person();
	Person(string Name, string BarCode, string DOB);
	Person(const Person & person);
	~Person();
	void setName(string Name);
	void setLastName(string LastName);
	void setdob(string DOB);
	void setNameAndLastName(string Name, string LastName);
	string getName() const;
	string getLastName() const;
	string getdob() const;
	friend ostream & operator << (ostream & out, const Person &);
	friend istream & operator >> (istream & in, Person &);
};
#endif