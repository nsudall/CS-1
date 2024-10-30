#include <iostream>

using namespace std;

void printArray(int array[], int size, int index) //prints the filled contents of the array
{
	cout << "Current numbers:";
	for (int j = 0; j <= index; j++)
		cout << ' ' << array[j];
	cout << endl;
}


int numOfFives(int array[], int size, int index) //counts the number of fives stored in the array
{
	int fiveCounter = 0;
	for (int j = 0; j <= index; j++)
	{
		if (array[j] == 5)
			fiveCounter++;
	}
	return (fiveCounter);
}


int main ()
{
	const int MAX_SIZE = 20;
	int array[MAX_SIZE];
	int i = 0;
	int numLoops;
	int posValue; //input variable so value is only put into array if it passes the tests

	do {
	       cout << "Enter a number: ";
       	       cin >> posValue;
	       if (posValue != -1) //only runs if is not the sentinal value
	       {
	       		if ( i != 0)//will not run for the first input
	       		{
				numLoops = 0;
	       	  		while (posValue <= array[i-1] && numLoops < 10)//compares posible value to the last item in the array
	       			{
					i -= 1; // so that an extra index is not printed when printArray is called
					cout << "Too small!" << endl;
					printArray(array, MAX_SIZE, i);
					cout << "Enter a number: ";
					cin >> posValue;
					i++; // so that new value will be placed in the right index
					numLoops++; //tracks number of loops
					if ( numLoops == 10)
						posValue = -1;
				}
	       		}

	       		if (posValue > 70)//checks value is not greater than seventy 
		       		posValue = 0;

	       		if (posValue != 0 && posValue % 5 == 0)//checks if value is divisable by five
		       		posValue = 5;

	       		if (posValue != -1) //prevents sentinal from being assigned when too small loop is exited
			{
				array[i] = posValue; //asigns final value to array
				printArray(array, MAX_SIZE, i);
	       	        	i++;
			}
	       }

	} while (posValue != -1 && i < 20);	       
	
	cout << "Number of 5s = " << numOfFives(array, MAX_SIZE, i) << endl;
	cout << "All done!" << endl;
	
	return 0;
}
