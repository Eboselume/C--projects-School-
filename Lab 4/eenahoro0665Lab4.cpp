//Lume Enahoro
//professor Hogan
//Lab 4

#include <iostream>
#include<iomanip>
#include <fstream>

using namespace std;

//structure
struct Inventory
{
  char desc[30];
  int qty;
  double wholeSaleCost;
};

// Function prototypes
void addRecord(fstream &);
void viewRecord(fstream &);
void changeRecord(fstream &);
void displayError();

int main()
{

  fstream inventoryFile;
  int choice;
  cout << setprecision(2) << fixed;

  do
  {
    // Display the menu.
    cout << "\n1. Add a new record\n";
    cout << "2. View an existing record by record number\n";
    cout << "3. Change an existing record\n";
    cout << "4. Exit\n\n";

    do
    {
      cout << "Enter your choice (1-4): ";
      cin >> choice;
    } while (choice < 1 || choice > 4);

    // Process the selection.
    switch (choice)
    {
      // Choice 1 is to add a record.
      case 1:
        addRecord(inventoryFile);
        break;

      // Choice 2 is to view a record.
      case 2:
        viewRecord(inventoryFile);
       break;

      // Choice 3 is to change a record.
      case 3:
        changeRecord(inventoryFile);

	  case 4:
		  cout << "Thank you for visiting the Enahoro store" << endl;
		  break;
    }
  } while (choice != 4);

  system ("pause");
  return 0;
}

//function to add records to a file
void addRecord(fstream& file)
{
	
	Inventory record;

	file.open("Inventory.dat", ios::out | ios::binary | ios::app); //open the file
	cout << "Enter the following inventory data: \n";
	cout << "Description: ";
	cin.ignore();
	cin >> record.desc;

	do
	{
		cout << "Qunatity: ";
			cin.ignore();
			cin >> record.qty;

			if (record.qty < 0)
			{
				displayError();
			}
			if(record.qty)
			{

			}

	} while (record.qty < 0);

		do
		{
			cout << "Retail Price: ";
			cin.ignore();
			cin >> record.wholeSaleCost;
			
			if (record.wholeSaleCost < 0)
			{
				displayError();
			}
			if(record.wholeSaleCost)
			{

			}

		} while (record.wholeSaleCost < 0);

		file.write(reinterpret_cast<char*> (&record), sizeof(record));// writes the string into characters
		cout << "Record written to file!\n";

		//Close file
		file.close();
}

//function to view records written to a file
void viewRecord(fstream& file)
{
	Inventory record;
	int recordNum;

	file.open("Inventory.dat", ios::in | ios::binary);// opens the file
	file.read(reinterpret_cast<char*>(&record), sizeof(record));// reads the strings into characters

	//prompts the user
	cout << "\nEnter the record number of the item: ";
	cin >> recordNum;

	cout << "Description: ";
	cout << record.desc << endl;
	cout << "Quantity: ";
	cout << fixed << showpoint << setprecision(2);
	cout << record.qty << endl;
	cout << "Retail Price: ";
	cout << record.wholeSaleCost << endl;


	// close the file
	file.close();
}

//function to change exisitng records
void changeRecord(fstream& file)
{
	Inventory record;
	int recordNum;

	file.open("Inventory.dat", ios::in | ios::binary);//opens the file
	file.read(reinterpret_cast<char*>(&record), sizeof(record));  //reads the strings into characters

	cout << "\nEnter the record number of the item: ";
	cin >> recordNum;
	cout << "\nCurrent record contents: ";

	cout << "\nDescription: ";
	cout << record.desc << endl;
	cout << "Qunatity: ";
	cout << fixed << showpoint << setprecision(2);
	cout << record.qty << endl;
	cout << "Retail Price: ";
	cout << record.wholeSaleCost << endl;

	//clost the file
	file.close();

	//open the file
	file.open("Inventory.dat", ios::out | ios::binary);

	cout << "\nEnter the new data: \n";

	cout << "Description: ";
	cin >> record.desc;

	do
	{
		cout << " Quantity: ";
		cin >> record.qty;

		if (record.qty < 0) {

		}
	} while (record.qty < 0);

	do
	{
		cout << "Retail price: ";
		cin >> record.wholeSaleCost;

		if (record.wholeSaleCost < 0) {

		}
	} while (record.wholeSaleCost < 0);

	file.write(reinterpret_cast<char*> (&record), sizeof(record));// write to file

	//close file
	file.close();

}

//function to display an error message
void displayError()
{
	cout << "Error! Input must be greater than zero!\n";
	cout << "Error! Input must be positive!\n";
	cout << "Error! Input must be numeric!\n";
}
