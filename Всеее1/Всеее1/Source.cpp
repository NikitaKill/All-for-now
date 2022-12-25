#include <iostream>
#include <cmath>
using namespace std;
void Foo(double a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;
	a = 15.0;
	cout << "New value of a in Foo(): " << a << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int choice;
	cout << "Введите номер задания" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		int a = 5;
		int b = 4;
		cout << "Address of a: " << &a << endl;
		cout << "Address of b: " << &b << endl;
		double c = 13.5;
		cout << "Address of c: " << &c << endl;
		bool d = true;
		cout << "Address of d: " << &d << endl;
		break;
	}
}