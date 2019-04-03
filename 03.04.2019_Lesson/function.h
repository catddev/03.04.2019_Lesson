#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;

//7.Person: �������, ���, ��������, �����, ���, �����������, ��� ��������.
//������� ������ ��������.������� :
	//a) ������ �������, ������� ������� ��������� ��������;
	//b) ������ ������� � ������ ������������;
	//c) ������ ������� �������� ����.

class Person {
private:
	char full_name[100];
	char address[50];
	char gender[10];
	char degree[50];
	int year;
public:
	Person() :full_name(""), address(""), gender(""), degree(""), year(0){} //����������� �� ���������: ("") - ������ ������

	//����������������� �����������, ����� ���������� ������ 2 ��������, ��������� ����� ���������� ����� �������
	Person(const char*full_name, const char*gender);
	// � ������� ���������� ������������� �� ����������, � ���������� ������� ��� ������ ������������� ���� �� ����������

	Person(const char*full_name, const char*address, const char*gender, const char*degree, int year);

	void setFull_name(const char* full_name);
	void setAddress(const char*address);
	void setGender(const char*gender);
	void setDegree(const char*degree);
	void setYear(int year);

	const char*getFull_name();
	const char*getAddress();
	const char*getGender();
	const char*getDegree();
	int getYear();

	void print();

	bool by_year(int y);
	bool by_degree(const char*str);
	bool by_gender(const char*str);
};