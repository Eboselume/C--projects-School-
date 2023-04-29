//Enahoro Lume
//Professor Hogan
//CMSY 171 - 001
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

constexpr int RECORDS{ 5 };

string tolowercase(string convertstring);
void adddata(int num, int arr1[], string arr2[]);
void disdata(int num, int arr1[], string arr2[]);

int main()
{
	constexpr int ADD{ 1 };
	constexpr int DISPLAY{ 2 };
	constexpr int QUIT{ 3 };

	int* animalCount{nullptr};
	int num{0}; //variable to store size of array
	int choice{0};

	
	string* animalType{nullptr}; //array to store animal type
	cout << "How many animal records would u like to store(5 max): ";
	cin >> num;

	while (num > RECORDS || cin.fail()) //function to handle error of data size or invalid entry
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Invalid entry! Try again: ";
		cin >> num;
	}
	animalCount = new int[num];
	animalType = new string[num];

	do
	{
		cout << "\n1. Add animals";
		cout << "\n2. Display animals";
		cout << "\n3. Quit";
		cout << "\n\nMenu choice: ";
		cin >> choice;

		switch (choice)
		{
		case ADD: adddata(num, animalCount, animalType);
			break;

		case DISPLAY: disdata(num, animalCount, animalType);
			break;

		case QUIT: 
			cout << "Exiting program " << endl;
			break;

		}
	} while (choice != QUIT);

	delete[]  animalType;
	animalType = nullptr;

	delete[] animalCount;
	animalCount = nullptr;


	system("pause");
	return 0;
}

string tolowercase(string convertstring) //function to convert to lowerstring
{
	string lowerString = "";
	for (int i = 0; i < convertstring.size(); i++)
	{
		lowerString += tolower(convertstring[i]);
	}
	return lowerString;
}

void adddata(int num, int arr1[], string arr2[]) //function to add data
{
	int animalCount;
	string animalType;
	int choice;

	for (int i = 0; i < num; i++)
	{
		cout << "Please enter an animal type(none to stop): ";
		cin >> animalType;
		arr2[i] = tolowercase(animalType);

		if (animalType != "none")
		{
			cout << "Enter the animal type's count: ";
			cin >> animalCount;
			arr1[i] = animalCount;

		}
		else
		{
			i = num;
		}

			
		
	}
}

void disdata(int num, int arr1[], string arr2[]) //function to display data
{
	for (int i = 0; i < num; i++)
	{
		cout << "Animal: " << arr2[i];
		cout << "\ncount: " << arr1[i] << "\n\n";
	}
}