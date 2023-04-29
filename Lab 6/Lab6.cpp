/*	Lume Enahoro
	Lab 6 Solution
	Computer Science 2
	Howard Community College
*/


// Do not make any changes to this file.

#include <iostream>
#include <string>
#include <vector>
#include "../source/repos/Project53/Project53/Month.h"

using namespace std;


int main()
{
	Month m1("February");
	Month m2, m3, m4;

	cout << m1.getMonthName() << endl;
	cout << m1.getMonthNumber() << endl;

	cout << endl;
	cout << m1;

	cout << endl;
	m2 = ++m1;
	cout << m1;
	cout << m2;
	cout << endl;
	m3 = m1++;
	cout << m1;
	cout << m3;

	cout << endl;
	cout << "Enter the name of a month: ";
	cin >> m4;

	cout << m4;

	system("Pause");
	return 0;
}
