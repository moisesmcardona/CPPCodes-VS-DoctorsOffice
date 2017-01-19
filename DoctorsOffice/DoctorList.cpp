#include "Person.h"
#include "DoctorList.h"
#include <string>
#include <iostream>
using namespace std;

DoctorList::DoctorList()
{
	this->specialty = "Not Specified";
}
DoctorList::DoctorList(Person doctorsarray[], string Specialty)
{
	for (int i = 0; i < 5; i++)
		this->doctors[i] = doctorsarray[i];
	this->specialty = Specialty;
}
DoctorList::DoctorList(const DoctorList & doctorslist)
{
	for (int i = 0; i < 5; i++)
		this->doctors[i] = doctorslist.doctors[i];
	this->specialty = doctorslist.specialty;
}
DoctorList::~DoctorList()
{

}
void DoctorList::setDoctors(Person doctorslist[], int i)
{
	this->doctors[i] = doctorslist[i];
}
void DoctorList::setSpecialty(string Specialty)
{
	this->specialty = Specialty;
}
Person DoctorList::getDoctors(int i) const
{
	return this->doctors[i];
}
string DoctorList::getSpecialty() const
{
	return this->specialty;
}
ostream & operator << (ostream & output, const DoctorList & value)
{
	for (int i = 0; i < 5; i++)
		output << value.getDoctors(i) << "\t" << value.getSpecialty() << endl;
	return output;
}
istream & operator >> (istream & input, DoctorList & value)
{
	Person DoctorsArray[5];
	string Specialty;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Doctor #" << i + 1 << " details" << endl;
		input >> DoctorsArray[i];
	}
	cout << "Enter Specialty: ";
	input >> Specialty;
	
	for (int i = 0; i < 5 ; i++)
		value.setDoctors(DoctorsArray, i);
	value.setSpecialty(Specialty);
	return input;
}