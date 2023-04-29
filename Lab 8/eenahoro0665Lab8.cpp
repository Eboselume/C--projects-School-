//Lume Enahoro
//Professor Hogan
//Lab 8
#include <iostream>
#include <string>
#include <List>

using namespace std;

//structure
struct Employee
{
	int EmployeeNumber;
	string firstName;
	string lastName;
	int age;

};

//function prototypes
void displayEmployee(list <Employee> &emp);
void addEmployee(list <Employee> &emp);
void changeEmployee(list <Employee> &emp);
void deleteEmployee(list <Employee> &emp);
void countEmployee(list <Employee> &emp);


int main()

{
	list <Employee> data;

	
	constexpr int DISPLAY{ 1 };
	constexpr int ADD{ 2 };
	constexpr int CHANGE{ 3 };
	constexpr int DELETE{ 4};
	constexpr int COUNT{ 5 };
	constexpr int EXIT{ 6 };
	int choice{ 0 };

	do
	{
		//Prompt the user 
		
		cout << "Menu Options "
			<< "\n1. Display Employee: "
			<< "\n2. Add Employee "
			<< "\n3. Change Employee "
			<< "\n4. Delete Employee"
			<< "\n5. Count Employee"
			<< "\n6. Exit"
			<< "\n\nEnter your choice:";
		cin >> choice;
		
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(32797, '\n');
			cout << "Invalid choice! Try again: ";
			cin >> choice;
		}

		//switch statement
		switch (choice)
		{
		case DISPLAY:
			displayEmployee(data);
			break;

		case ADD:
			addEmployee(data);
			break;

		case CHANGE:
			changeEmployee(data);
			break;

		case DELETE:
			deleteEmployee(data);
			break;

		case COUNT:
			countEmployee(data);
			break;

		case EXIT:
			cout << "Program Exited! " << endl;
			break;

		default:
			cout << "Error";
			break;
		}


	} while (choice != EXIT);

	system("pause");
	return 0;
}

//function that displays the employee's information
void displayEmployee(list <Employee> &emp)
{
	list<Employee>::iterator it;

	for (it = emp.begin(); it != emp.end(); it++)
	{
		cout << "ID: " << it->EmployeeNumber << endl;
		cout << "Name: " << it->firstName << it->lastName << endl;
		cout << "Age: " << it->age << endl;
		
	}
	cout << endl << endl;
}

//function that adds information about an employee
void addEmployee(list <Employee> &emp)
{
	Employee tempEmployee;

	for (int i = 0; i < emp.size(); i++)
	{
		cout << "Enter employee's ID: ";
		cin >> tempEmployee.EmployeeNumber;

		if (tempEmployee.EmployeeNumber < 101)
		{
			cout << "Invalid entry! PLease try again.";
			cin >> tempEmployee.EmployeeNumber;
		}

		cout << "Enter employee's first name: ";
		cin >> tempEmployee.firstName;

		cout << "Enter employee's last name: ";
		cin >> tempEmployee.lastName;

		cout << "Enter employee's age: ";
		cin >> tempEmployee.age;

		if (tempEmployee.age < 16)
		{
			cout << "Invalid! Entry must be greater than 16, please try again.";
			cin >> tempEmployee.age;
		}
		

	}
	emp.push_back(tempEmployee);
	cout << endl << endl;
}

//function that changes the information about an employee
void changeEmployee(list <Employee> &emp)
{
	int empID;

	cout << "Enter the ID of the employee you would like to change: ";
	cin >> empID;

	list <Employee>::iterator it;

	for (it = emp.begin(); it != emp.end(); it++)
	{
		if (it->EmployeeNumber == empID)
		{
			cout << "Enter employee's ID: ";
			cin >> it->EmployeeNumber;

			if (it-> EmployeeNumber < 101)
			{
				cout << "Invalid entry! PLease try again.";
				cin >> it-> EmployeeNumber;
			}
			cout << "Enter employee's first name: ";
			cin >> it-> firstName;

			cout << "Enter employee's last name: ";
			cin >> it-> lastName;

			cout << "Enter employee's age: ";
			cin >> it-> age;

			if (it-> age < 16)
			{
				cout << "Invalid! Entry must be greater than 16, please try again.";
				cin >> it-> age;
			}
		}

		else if (it->EmployeeNumber != empID)
		{
			cout << "Employee information not found." << endl;
		}
	}
	cout << endl << endl;

}

//function that deletes the employee information
void deleteEmployee(list <Employee> &emp)
{

	int empID;
	cout << "Enter the employee's ID that yo want to delete: ";
	cin >> empID;

	list <Employee>::iterator it;

	for (it = emp.begin(); it != emp.end(); it++)
	{
		if (it->EmployeeNumber == empID)
		{
			emp.erase(it);
			cout << "Employee infroamtion is deleted." << endl;
		}

		else if (it->EmployeeNumber != empID)
		{
			cout << "Employee information not found" << endl;
		}

	}
	cout << endl << endl;
}

//function that counts the number of entries of employees
void countEmployee(list <Employee> &emp)
{
	int count{0};

	list <Employee>::iterator it;

	for (it = emp.begin(); it != emp.end(); it++)
	{
		count++;
	}

	cout << "The employee list has " << count << " entries " << endl << endl;
	cout << endl << endl;
}