//Lume Enahoro
//Professor Hogan
//Lab 9- This is about creating a program that performs factorials

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	int factorial{ 1 };
	int Facnum;

	//stack variable
	stack < int, vector<int> > iStack;

	//prompt the user
	cout << "Enter a number to compute the factorial for: ";
	cin >> Facnum;

	//Displays the numbers being pushed in the stack
	for (int num = Facnum ; num >= 1 ; num--)
	{
		cout << "Pushing " << num << " onto the stack " << endl << endl;
		iStack.push(num);
	}

	//Displays the numbers being removed in the stack and being multiplied
	for (int num = Facnum; num >= 1; num--)
	{
		factorial *= iStack.top();
		iStack.pop();

	}

	cout << Facnum << "! is: " << factorial << endl;

	system("pause");
	return 0;
}