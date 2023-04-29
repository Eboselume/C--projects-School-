//Enahoro Lume
//Professor Hogan
//CMSY 171 - 001
//This program is about storing the animal types and counts displaying them for the user.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

constexpr int RECORDS{ 5 };

//Function prototypes
string tolowercase(string convertstring);
void adddata(int num, int arr1[], string arr2[]);
void disdata(int num, int arr1[], string arr2[]);

int main()
{
	constexpr int ADD{ 1 };
	constexpr int DISPLAY{ 2 };
	constexpr int QUIT{ 3 };
	int* animalCount{nullptr};//pointer to an array
	int num{0}; //variable to store size of array
	int choice{0};
	string* animalType{nullptr}; //array to store animal type

	//Prompt the user
	cout << "How many animal records would u like to store(5 max): ";
	cin >> num;

	//function to handle error of data size or invalid entry
	while (num > RECORDS || cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Invalid entry! Try again: ";
		cin >> num;
	}

	//stores the array as a pointer
	animalCount = new int[num];//DN Should this not be asterisks
	animalType = new string[num];

	do
	{

		//Prompt the user
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

	//clears the buffer and stores the pointer as null
	delete[]  animalType;
	animalType = nullptr;//DN . Ask why do we set to null

	delete[] animalCount;
	animalCount = nullptr;


	system("pause");
	return 0;
}

//function to convert to lowerstring
string tolowercase(string convertstring) //DU
{
	string lowerString = "";
	for (int i = 0; i < convertstring.size(); i++)
	{
		lowerString += tolower(convertstring[i]);
	}
	return lowerString;
}

//function to add data
void adddata(int num, int arr1[], string arr2[]) 
{
	//variables
	int animalCount; // temporary variables used to store the values 
	string animalType;// temporary variables used to store the values 
	bool isFound{ false };// flag

	// This part of the code not needed(wrong). See someone for correct answer
	//for loop that searches for none or an empty string
	//for (int i = 0; i < num; i++)
	//{

	//	//if statement to check if none or an empty string is in the array
	//	if (arr2[i] == "none" || arr2[i] == "")//It turns out this 
	//	{
	//		isFound = true;
	//		i = num;
	//		break;
	//	}
	//	
	//	else
	//	{
	//		isFound = false;//DU
	//		
	//		
	//	}
	//	
	//}

	//if (isFound == false)
	//{
	//	cout << "Animal database full, no avaliable records..." << endl;
	//	return;
	//}
	//

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
			i = num;// sets the counter to num in order to exit the loop  
		}
	}
}

//function to display data
void disdata(int num, int arr1[], string arr2[])
{
	for (int i = 0; i < num; i++)
	{
		cout << "Animal: " << arr2[i];
		cout << "\ncount: " << arr1[i] << "\n\n";
	}
}