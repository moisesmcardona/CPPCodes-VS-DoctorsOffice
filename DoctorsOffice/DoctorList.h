#ifndef DOCTORLIST_H
#define DOCTORLIST_H
#include <iostream>
#include "Person.h"
using namespace std;
class DoctorList {
private:
	Person doctors[5];
	string specialty;
public:
	DoctorList();
	DoctorList(Person doctorsarray[], string Specialty);
	DoctorList(const DoctorList & doctorslist);
	~DoctorList();
	void setDoctors(Person doctorarray[], int i);
	void setSpecialty(string Specialty);
	Person getDoctors(int i) const;
	string getSpecialty() const;
	friend ostream & operator << (ostream & out, const DoctorList &);
	friend istream & operator >> (istream & in, DoctorList &);
};
#endif