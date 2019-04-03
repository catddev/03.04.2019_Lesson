#include"function.h"
void menu(Vector v)
{
	while (true) {
		int choice;
		cout << " Enter 1 to print by year of birth" << endl;
		cout << " Enter 2 to print by degree" << endl;
		cout << " Enter 3 to print males only" << endl;
		cout << " Enter 4 to print all" << endl;
		cout << " Enter 0 exit" << endl;
		cin >> choice;
		if (choice == 0) break;
		switch (choice)
		{
		case 1:
			int n;
			cout << "Enter the minimal age:" << endl;
			cin >> n;
			for (int i = 0; i < v.size(); i++)
				if (v.at(i).by_year(n))
					v.at(i).print();
			cout << endl;
			break;
		case 2:
			char str[100];
			cout << "Enter a degree:" << endl;
			cin.ignore();
			cin.getline(str, 50);
			for (int i = 0; i < v.size(); i++)
				if (v.at(i).by_degree(str))
					v.at(i).print();
			cout << endl;
			break;
		case 3:
			for (int i = 0; i < v.size(); i++)
				if (v.at(i).by_gender())
					v.at(i).print();
			cout << endl;
			break;
		case 4:
			for (int i = 0; i < v.size(); i++)
				v.at(i).print();
			cout << endl;
			break;
		}
	}
}