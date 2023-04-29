//Enahoro Lume
//Professor Hogan
//CMSY 171- 001
//This program is about storing and displaying animal types and counts for a user.

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

constexpr int RECORDS{ 5 };

struct Animal
{
	string animalType;
	int animalCount;
};

//Function Prototypes
string toLowerCase(string convertstring);
void addData(vector<Animal> &animalList);
void displayData(vector<Animal> &animalList);



int main()
{


	constexpr int ADD{ 1 };
	constexpr int DISPLAY{ 2 };
	constexpr int QUIT{ 3 };
	int choice;

	//Empty Vector
	vector <Animal> animalList;

	do
	{

		//Prompt the user
		cout << "\n1. Add animals";
		cout << "\n2. Display animals";
		cout << "\n3. Quit";
		cout << "\n\nMenu choice: ";
		cin >> choice;

		while (cin.fail())
		{
			cin.clear();// clears the error or resets the fail bit
			cin.ignore(32767, '\n');// clears the input buffer, the number stands for amount of bytes
			cout << "Invalid choice! Try again: ";
			cin >> choice;
		}

		//switch statement
		switch (choice)
		{
		case ADD: 
			 addData(animalList);
			break;

		case DISPLAY: 
			 displayData(animalList);
			break;

		case QUIT:
			cout << "Exiting program " << endl;
			break;

		}
	} while (choice != QUIT);


	system("pause");
	return 0;
}

//function to convert to lowerstring
string toLowerCase(string convertstring)
{
	string lowerString = "";
	for (int i = 0; i < convertstring.size(); i++)
	{
		lowerString += tolower(convertstring[i]);
	}
	return lowerString;
}

//Function to add animal types and animal counts
void addData(vector<Animal> &animalList)
{

	for (int i = 0; i < RECORDS; i++)
	{
		Animal tempName;

		//Prompts the user
		cout << "Please enter an animal type(none to stop): ";
		cin.ignore();// clears the buffer
		getline(cin, tempName.animalType);
		tempName.animalType = toLowerCase(tempName.animalType);
		

		//If statement for if the user enters none or an empty string
		if (tempName.animalType == "none" || tempName.animalType == "")
		{
			i = RECORDS;
			break;

		}

		else
		{
			//Prompt the user
			cout << "Enter the animal's type count: ";
			cin >> tempName.animalCount;

			while (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Invalid choice! Try again: ";
				cin >> tempName.animalCount;
			}

		}

		animalList.push_back(tempName);
	}

}

//Function to display animal types and counts
void displayData(vector<Animal> &animalList )
{

		for (int i= 0; i < animalList.size(); i++)
		{
			cout << "Animal: " << animalList[i].animalType;
			cout << "\ncount: " <<  animalList[i].animalCount << "\n\n";
		}
	
}
