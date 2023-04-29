#ifndef MONTH_H
#define MONTH_H
#include <string>

using namespace std;

class Month
{
private:
	string Name;
	int monthNumber;

public:
	//default constructor
	Month()
	{
		Name = "January";
		monthNumber = 1;
	}

	//Month constructor for strings
	Month(string Mname)
	{
		Name = Mname;
		if (Mname == "January")
		{
			setMonthNumber(1);
		}
		else if (Mname == "February")
		{
			setMonthNumber(2);
		}
		else if (Mname == "March")
		{
			setMonthNumber(3);
		}
		else if (Mname == "April")
		{
			setMonthNumber(4);
		}
		else if (Mname == "May")
		{
			setMonthNumber(5);
		}
		else if (Mname.compare("June")==0)
		{
			monthNumber = 6;
		}
		else if (Mname == "July")
		{
			setMonthNumber(7);
		}
		else if (Mname == "Augest")
		{
			setMonthNumber(8);
		}
		else if (Mname == "September")
		{
			setMonthNumber(9);
		}
		else if (Mname == "October")
		{
			setMonthNumber(10);
		}
		else if (Mname == "November")
		{
			setMonthNumber(11);
		}
		else if(Mname == "December")
		{
			setMonthNumber(12);
		}
	}

	//Month constructor for integers
	Month(int Mnum)
	{
			monthNumber = Mnum;
			if (Mnum == 1)
			{
				setMonthName("January");
			}

			else if (Mnum == 2)
			{
				setMonthName("February");
			}

			else if (Mnum == 3)
			{
				setMonthName("March");
			}

			else if (Mnum == 4)
			{
				setMonthName("April");
			}

			else if (Mnum == 5)
			{
				setMonthName("May");
			}

			else if (Mnum == 6)
			{
				setMonthName("June");
			}

			else if (Mnum == 7)
			{
				setMonthName("July");
			}

			else if (Mnum == 8)
			{
				setMonthName("August");
			}

			else if (Mnum == 9)
			{
				setMonthName("September");
			}

			else if (Mnum == 10)
			{
				setMonthName("October");
			}

			else if (Mnum == 11)
			{
				setMonthName("November");
			}

			else if (Mnum == 12)
			{
				setMonthName("December");
			}
	}

	//function prototypes
	void setMonthName(string Mname);
	void setMonthNumber(int Mnum);
	string getMonthName() const;
	int getMonthNumber() const;
	Month operator++();
	Month operator++(int);
	void operator=(const Month& m);
	friend  istream& operator >> (istream& in, Month& c);
	friend ostream& operator << (ostream& out, Month& c);

};
#endif
