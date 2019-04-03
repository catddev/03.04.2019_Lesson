#include "Vector.h"

Vector::Vector()
{
	cur_size = 0;
	buf_size = 0;
	ps = 0;
}

Vector::Vector(int size)
{
	buf_size = size;
	cur_size = 0;
	ps = new Person[buf_size];
}

int Vector::size()
{
	return cur_size;
}

void Vector::add(Person el)
{
	if (buf_size == 0)
	{
		buf_size = 4;
		ps = new Person[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			Person*tmp1 = new Person[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp1[i] = ps[i];
			delete[] ps;
			ps = tmp1;
		}
	}
	ps[cur_size++] = el;
}
Person Vector::at(int i) {
	return ps[i];
}