/*Enahoro Lume
Professor Hogan
CMSY 171 - 001
This program is about searching for a specific infromation about a team.
*/ 


#include <iostream>
#include <vector>

using namespace std;

constexpr int NUM_TEAMS{ 10 };
constexpr int NUM_MEMBERS{ 3 };

struct TeamS
{
	int id;
	string teamMembers[NUM_TEAMS];

};

//Function Prototypes
void initialize(vector <TeamS>& TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize);
void displayTeams(const vector <TeamS>& TeamV);
void Menu();
void linearSearchTeams(const vector <TeamS> &TeamV, int id);
void binarySearchTeams(const vector <TeamS> &TeamV, int id);

int main()
{

	constexpr int DISPLAY{1};
	constexpr int LINEARSEARCH{ 2 };
	constexpr int BINARYSEARCH{ 3 };
	constexpr int EXIT{ 4 };
	int choice{0};
	int value{ 0 };

	//empty vector
	vector <TeamS> TeamV;

	const int teamID[NUM_TEAMS]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };

	const string teamMembers[NUM_TEAMS][NUM_MEMBERS]
	{
		{"Ayo", "Angie", "Shawn"},
		{"Avalon", "Nehemiah", "James"},
		{"Zulekha", "Kyle", "Jay"},
		{"Mickey", "Minnie", "Daisy"},
		{"Donald", "Goofy", "Pluto"},
		{"Huey", "Dewey", "Louie"},
		{"Luke", "Leia", "Han"},
		{"Natasha", "Carol", "Wanda"},
		{"Harry", "Ron", "Hermione"},
		{"May", "Peter", "Mary Jane"}
	};

	initialize(TeamV, teamID, teamMembers, NUM_TEAMS);
	displayTeams(TeamV);

	while (cin.fail())
	{
		cin.clear();// clears the error or resets the fail bit
		cin.ignore(32767, '\n');// clears the input buffer, the number stands for amount of bytes
		cout << "Invalid choice ";
		cin >> choice;
	}
	
	do
	{
		cout << endl << endl;
		Menu();
		cout << "\n\nMenu Selection: ";
		cin >> choice;

		//switch statement
		switch (choice)
		{

		case DISPLAY:
			 
			 displayTeams(TeamV);

			break;

		case LINEARSEARCH:

			linearSearchTeams(TeamV,value);

			break;

		case BINARYSEARCH:

			binarySearchTeams(TeamV, value);

			break;

		case EXIT:

			cout << "Exiting program" << endl;

			break;

		}

	} while (choice != 4);
	
	

	system("pause");
	return 0;
}

//a function that intializes data to an empty vector
void initialize(vector <TeamS>& TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize)
{

	//Temporary variable for the vector name
	TeamS tempTeam;

	for (int i = 0; i < NUM_TEAMS; i++)
	{

		tempTeam.id = id[i];

		for (int j = 0; j < NUM_MEMBERS; j++)
		{
			tempTeam.teamMembers[j] = members[i][j];

		}
		
		// stores the values in vector
		TeamV.push_back(tempTeam);
	}

}

//a function that displays the contents in a vector
void displayTeams(const vector <TeamS> &TeamV)
{

	for (int i = 0; i < TeamV.size(); i++)
	{
		cout << "\nTeam: " << TeamV[i].id << "\n\n";

		for (int j = 0; j < NUM_MEMBERS; j++)
		{
			cout << TeamV[i].teamMembers[j] << "\n";

		}
	}

}

void Menu()
{
	//Prompt the user
	cout <<"1. Displays Teams\n"
		<< "2. Find Team: Linear Search\n"
		<< "3. Find Team: Binary Search\n"
		<< "4. Exit" << endl;
}

// function that searches the contents of a vector(linear search)
void linearSearchTeams(const vector <TeamS>& TeamV, int id)
{
	
	//prompt the user
	cout << "Enter the team ID to search for: ";
	cin >> id;

	int foundIdx{ -1 }; // position tracker

	for (int i = 0; i < TeamV.size(); i++)
	{
		if (TeamV[i].id == id)
		{
			cout << "ID:\t" << TeamV[i].id << "\t";

			for (int j = 0; j < NUM_MEMBERS; j++)
			{
				cout << TeamV[i].teamMembers[j] << "\t";
			}

			foundIdx = i; 
			i = TeamV.size();

			cout << endl;
			
		}
	}

	if (foundIdx == -1)
	{
		cout << "Team ID not found" << endl;
	}
}

//function that uses a binary search for members in Team S
void binarySearchTeams(const vector <TeamS> &TeamV, int id)
{
	
	int first = 0; //first vector element
	int last = TeamV.size() - 1;//last vector element
	int middle; // middle point of search
	int position = -1; //Track the postion of middle (we use negative numbers because 0 can be a valid position)
	bool found = false; // flag
	
	//prompt the user
	cout << "Enter the team ID: ";
	cin >> id;

	//loop
	while (!found && first <= last)
	{
		middle = (first + last) / 2;

		if (TeamV[middle].id == id)
		{
			found = true;
			position = middle;

			cout << "The ID: " << TeamV[position].id << "\t";
			
			for (int j = 0; j < NUM_MEMBERS; j++)
			{
				cout << TeamV[position].teamMembers[j] << "\t";
			}
		}
				 else if (TeamV[middle].id > id)
				{
					last = middle - 1;
				}

				else
				{
					first = middle + 1;
				}

	}

	if (TeamV[middle].id != id)
	{
		cout << "Team ID not found " << endl;
	}
}