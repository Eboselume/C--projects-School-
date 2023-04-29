#include <iostream>
#include <string>
#include <vector>
#include "Month.h"

using namespace std;

//function that sets the name of the month
void Month::setMonthName(string Mname)
{
	 Name = Mname;
}

//function that retrieves the name of the month
string Month::getMonthName() const
{
	return Name;
}

//function that sets the number of the month
void Month::setMonthNumber(int Mnum)
{
	 monthNumber = Mnum;
}

//retrieves the number of the month
int Month::getMonthNumber() const
{
	return monthNumber;
}

//operator function
 Month Month:: operator ++()
{

	if (monthNumber == 12)
	{
		monthNumber = 1;
	}

	else
	{
		++monthNumber;
	}

	switch (monthNumber)
	{
	case 1:
		Name = "January";
		break;

	case 2:
		Name = "February";
		break;

	case 3:
		Name = "March";
		break;

	case 4:
		Name = "April";
		break;

	case 5:
		Name = "May";
		break;
	
	case 6:
		Name = "June";
		break;

	case 7:
		Name = "July";
		break;

	case 8:
		Name = "August";
		break;

	case 9:
		Name = "september";
		break;
	case 10:
		Name = "October";
		break;

	case 11:
		Name = "November";
		break;

	case 12:
		Name = "December";
		break;

	}
	return *this;
}

 //increment operator function
 Month Month :: operator ++(int)
 {
	 Month M(Name);
	 if (monthNumber == 12)
	 {
		 monthNumber = 1;
	 }
	 else
	 {
		 monthNumber++;
	 }

	 switch (monthNumber)
	 {
	 case 1:
		 Name = "January";
		 break;
	 case 2:
		 Name = "February";
		 break;
	 case 3:
		 Name = "March";
		 break;
	 case 4:
		 Name = "April";
		 break;
	 case 5:
		 Name = "May";
		 break;
	 case 6:
		 Name = "June";
		 break;
	 case 7:
		 Name = "July";
		 break;
	 case 8:
		 Name = "August";
		 break;
	 case 9:
		 Name = "September";
		 break;
	 case 10:
		 Name = "October";
		 break;
	 case 11:
		 Name = "November";
		 break;
	 case 12:
		 Name = "December";
		 break;
	 }

	 return M;
 }

 //Overload operator function 
  void Month :: operator = (const Month& m)
 {
	 Name = m.Name;
	 monthNumber = m.monthNumber;
 }

 // stream insertion operator
ostream& operator << (ostream& out, Month& c)
{
	out << "The name is " << c.Name << " and the number is " << c.monthNumber << endl;
	return out;
}

//stream extraction operator
istream& operator >> (istream& in, Month& c)
{
	in >> c.Name;
	string n = c.Name;
	if (n == "January")
	{
		c.monthNumber = 1;
	}
	else if (n == "February")
	{
		c.monthNumber = 2;
	}
	else if (n == "March")
	{
		c.monthNumber = 3;
	}
	else if (n == "April")
	{
		c.monthNumber = 4;
	}
	else if (n =="May")
	{
		c.monthNumber = 5;
	}
	else if (n == "June")
	{
		c.monthNumber = 6;
	}
	else if (n == "July")
	{
		c.monthNumber = 7;
	}
	else if (n == "August")
	{
		c.monthNumber = 8;
	}
	else if (n == "September")
	{
		c.monthNumber = 9;
	}
	else if (n == "October")
	{
		c.monthNumber = 10;
	}
	else if (n == "November")
	{
		c.monthNumber = 11;
	}
	else if (n == "December")
	{
		c.monthNumber = 12;
	}

	return in;
}




