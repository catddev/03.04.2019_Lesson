#pragma once
#include<iostream>
#include<fstream>
#include<cstring>

struct Capital {
	char name;
	double area;
	double population;
	char climate;
	//#ifdef CAPITAL 1
	void print_capital();
	//#endif
};
struct Country {
	char name;
	double area;
	double population;
	char currency;
	Capital cap_city;
	//#ifdef COUNTRY 1
	void print_country();
	//#endif
};