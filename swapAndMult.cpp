#include <iostream>
using namespace std;

void getInputs(int & input1Ref, int & input2Ref) // allows user to input values
{
	cout << "Input two numbers: ";
	cin >> input1Ref >> input2Ref;
}


void swap(int & input1, int & input2) //swaps input1 and input2 values
{
	int temp = input1;
	input1 = input2;
	input2 = temp;
}

void swapAndMult(int & input1, int & input2, int multiplier) //swaps the two input values and multiplies them by the multiplier
{
	swap(input1, input2);
	input1 *= multiplier;
	input2 *= multiplier;
}


void print2Ints(int input1, int input2)//printing funtion for inputs
{
	cout << input1 << ' ' << input2 << endl;
}


int main ()
{
	int input1;
	int input2;
	int multiplierInput;
	getInputs (input1, input2);
	print2Ints (input1, input2);
	swap (input1, input2);
	cout << "After swap:" << endl;
	print2Ints (input1, input2);
	cout << "Enter the multiplier: ";
	cin >> multiplierInput;
	cout << multiplierInput << endl;
	swapAndMult (input1, input2, multiplierInput);
	cout << "After swap and mult:" << endl;
	print2Ints (input1, input2);
	return 0;
}
