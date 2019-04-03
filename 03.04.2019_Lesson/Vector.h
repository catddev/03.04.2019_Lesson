#pragma once
#include "Person.h"

class Vector {
private:
	int cur_size;
	int buf_size;
	Person* ps;
public:
	Vector();
	Vector(int size);
	int size();
	void add(Person el);
	Person at(int i);
};