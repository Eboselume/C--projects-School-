#include <iostream>
#include "student.h"
#include <string>

using namespace std;

//Function that sets name
void Student::setName(string nm)
{
	name = nm;
}

//function that sets id
void Student::setID(int id)
{

	string tempName{ "" };
	tempName = getName();

	if (id >= 10 && id <= 99)
	{
		sid = id;
	}
	
	else
	{
		sid = 10;
		cout << "Invalid. Can not set id to " << id <<" for " << tempName << endl;
	}
}

//function that that sets scores
void Student::setScores(int i, int score)
{
	string tempName{ "" };
	tempName = getName();

	if ((i >= 0 && i < num) && (score >= 0 && score <= 100 ))
	{
		tests[i+1] = score;
	}

	else 
	{
		cout << "Invalid. Can not set test " << i << " to " << score << " for " << tempName << endl;
	}

}

//function that returns the name 
string Student::getName() const
{
	return name;
}

//function that returns id
int Student::getID() const
{
	return sid;
}

//function that displays the scores
void Student::showScores()
{
	for (int i = 0; i < num; i++)
	{
		cout << "Test " << i + 1 << " had a score of " << tests[i + 1] << endl;

	}
}
//function that displays name and id
void Student::display()
{
	string Pname = "";
	Pname = getName();
	
	getID();
	cout << "Student Name: " << Pname << endl;
	cout << "Student ID: " << sid << endl;
	showScores();

}

