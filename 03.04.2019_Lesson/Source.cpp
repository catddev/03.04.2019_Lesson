#include"function.h"
using namespace std;


#define Capital
#define KZ 1
#define RU 2
#define USA 3

int cur_size = 0, buf_size = 0;
void add(Country*&bs, Country el) {
	if (buf_size == 0)
	{
		buf_size = 4;
		bs = new Country[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			Country*tmp1 = new Country[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp1[i] = bs[i];
			delete[] bs;
			bs = tmp1;
		}
	}
	bs[cur_size++] = el;
}


int main() {

	Country *cs = 0;
	Country tmp;
	ifstream in_file("in.txt");
	while (!in_file.eof())
	{
		in_file >> tmp.title >> tmp.Cap.title >> tmp.Cap.population;
		add(cs, tmp);
	}
	cs[KZ].print();



	system("pause");
}