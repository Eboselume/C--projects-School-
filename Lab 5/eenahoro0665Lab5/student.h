#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string name;
	int sid;
	int* tests{ nullptr };
	int num;

	void makeArray()
	{

		if (tests == nullptr)
		{

			tests = new int[num];
			
			for (int i = 0; i < num; i++)
			{
				tests[i] = 0;
			}
			
		}
			
		
	}
public:

	//Default constructor 
	Student()
	{
		setName("None");
		setID(10);
		num = 3;
		makeArray();
	}

	//constructor for id
	Student(int n)
	{
		setName("None");
		setID(10);

		if (n > 0)
		{
			num = n;
		}
		else
		{
			num = 3;
			
		}
		makeArray();
	}

	//constructor for name, id and num
	Student(string nm, int id, int n)
	{
		setName(nm);
		setID(id);
		
		if (n > 0)
		{
			num = n;
		}

		else
		{
			num = 3;
		}
		makeArray();

	}

	//function prototypes
	void setName(string nm);
	void setID(int id);
	void setScores(int i, int score);
	string getName() const;
	int getID() const;
	void showScores();
	void display();

	//function that deletes the dynamic allocated array
	~Student()
	{
		delete[] tests;
		tests = nullptr;
	}



};





#endif
