//Lume Enahoro
//Professor Hogan
#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	//call the functions
	Student student1;
	Student student2(4);
	Student student3("Joe", 40, 5);

	cout << "Calling the set functions" << endl;
	student1.setName("Tom");
	student1.setID(200);
	student1.setID(20);
	student1.setScores(0, 75);
	student1.setScores(1, 85);
	student1.setScores(2, 95);
	

	student2.setName("John");
	student2.setID(30);
	student2.setScores(0, 70);
	student2.setScores(1, 80);
	student2.setScores(2, 90);
	student2.setScores(3, 100);
	

	student3.setScores(5, 95);
	student3.setScores(4, 105);
	student3.setScores(-5, -105);
	student3.setScores(0, 90);
	student3.setScores(1, 91);
	student3.setScores(2, 92);
	student3.setScores(3, 93);
	student3.setScores(4, 94);
	

	cout << endl << endl;

	cout << "Calling the display function " << endl;

	student1.display();
	cout << endl;

	student2.display();
	cout << endl;

	student3.display();
	cout << endl;

	student1.~Student();
	student2.~Student();
	student3.~Student();
	system("pause");
	return 0;
}