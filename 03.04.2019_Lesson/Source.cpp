#include"Person.h"
#include"Vector.h"
#include "function.h"


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in_file("in.txt");

	Vector v; //объявляем вектор для вызова метода add

	//Person *ps = 0;
	Person tmp;
	char str[100];
	int y;
	if (!in_file)
		cerr << "File open error" << endl;
	else
	{
		while (!in_file.eof())
		{
			in_file.getline(str, 100, '#');
			tmp.setFull_name(str);

			in_file.getline(str, 50, '#');
			tmp.setAddress(str);

			in_file >> str;
			tmp.setGender(str);

			in_file >> str;
			tmp.setDegree(str);

			in_file >> y;
			tmp.setYear(y);

			//in_file.ignore();// !!!здесь не обязательно ignore() т.к. в тхт файле в конце каждой строки endl и он съедает символ

			v.add(tmp);
		}
	}
	menu(v);
	system("pause");
}