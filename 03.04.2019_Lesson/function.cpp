#include"function.h"

Person::Person(const char*full_name, const char*gender) {
	strcpy_s(this->full_name, full_name);
	strcpy_s(this->gender, gender);
}

Person::Person(const char*full_name, const char *address, const char* gender, const char *degree, int year) {
	strcpy_s(this->full_name, full_name);
	strcpy_s(this->address, address);
	strcpy_s(this->gender, gender);
	strcpy_s(this->degree, degree);
	this->year = year;
}

void Person::setFull_name(const char * full_name)
{
	strcpy_s(this->full_name, full_name);
}

void Person::setAddress(const char * address)
{
	strcpy_s(this->address, address);
}

void Person::setGender(const char * gender)
{
	strcpy_s(this->gender, gender);
}

void Person::setDegree(const char * degree)
{
	strcpy_s(this->degree, degree);
}

void Person::setYear(int year)
{
	this->year = year;
}

const char * Person::getFull_name()
{
	return full_name;
}

const char * Person::getAddress()
{
	return address;
}

const char * Person::getGender()
{
	return gender;
}

const char * Person::getDegree()
{
	return degree;
}

int Person::getYear()
{
	return year;
}

void Person::print()
{
	cout << full_name << ": " << address << endl;
	cout << gender << "; " << degree << "; " << year << endl;
}

bool Person::by_year(int y)
{
	return (year > y);
}

bool Person::by_degree(const char * str)
{
	if (strcmp(degree, str) == 0)
		return true;
	else
		return false;
}

bool Person::by_gender(const char * str)
{
	if (strcmp(gender, "мужской") == 0)
		return true;
	else
		return false;
}


