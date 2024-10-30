 #include <iostream>
using namespace std;

int main ()//start main function
{
	//Inital outputs
	cout << "Simple calculator" << endl;
	cout << "Give a first number: ";
	int numberInputOne;
	cin >> numberInputOne;

	//variables used in do while loop
	char operationInput;
	int total = numberInputOne;
	int numberInputTwo;
	bool exitProgram = false;
	bool operationInvalid = false;

	do
	{
		//get operation selection
		cout << "Choose an operation: ";
		cin >> operationInput;
		
		//completes correct operation based on user input
		switch (operationInput)
		{
			case 'x':
				cout << "Choose a number to multiply: ";
				cin >> numberInputTwo;
				cout << total << 'x' << numberInputTwo << " = ";
				total *= numberInputTwo;
				cout << total << endl;
				operationInvalid = false;
				break;

			case '+':
				cout << "Choose a number to add: ";
				cin >> numberInputTwo;
				cout << total << '+' << numberInputTwo << " = ";
				total += numberInputTwo;
				cout << total << endl;
				operationInvalid = false;
				break;

			case 'q':
				exitProgram = true;
				operationInvalid = false;
				cout << "Finished!";
				break;
			default:
				cout << "Invalid operation, try again" << endl;
				operationInvalid = true;
				break;
		}
				
	}while (exitProgram == false || operationInvalid == true);//continues loop if user does not input q or enters an invalid operation

	return 0;
}
