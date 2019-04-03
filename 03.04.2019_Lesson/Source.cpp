#include"function.h"

int cur_size = 0, buf_size = 0;
void add(Person*&bs, Person el) {
	if (buf_size == 0)
	{
		buf_size = 4;
		bs = new Person[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			Person*tmp1 = new Person[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp1[i] = bs[i];
			delete[] bs;
			bs = tmp1;
		}
	}
	bs[cur_size++] = el;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in_file("in.txt");
	Person *ps = 0;
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

			in_file.ignore();// !!

			add(ps, tmp);
		}

		bool f = true;
		while (f) {
			int choice;
			cout << " Enter 1 to print by year of birth" << endl;
			cout << " Enter 2 to print by degree" << endl;
			cout << " Enter 3 to print males only" << endl;
			cout << " Enter 0 exit" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1:
				int n;
				cout << "Enter the earliest year:" << endl;
				cin >> n;
				for (int i = 0; i < cur_size; i++)
					if (ps[i].by_year(n))
						ps[i].print();
				cout << endl;
				break;
			case 2:
				cout << "Enter a degree:" << endl;
				cin.ignore();
				cin.getline(str, 50);
				for (int i = 0; i < cur_size; i++)
					if (ps[i].by_degree(str))
						ps[i].print();
				cout << endl;
				break;
			case 3:
				for (int i = 0; i < cur_size; i++)
					if (ps[i].by_gender(str))
						ps[i].print();
				cout << endl;
				break;
			case 0:
				f = false;
				break;
			}
		}
	}
	system("pause");
}