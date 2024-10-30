#include <iostream>
using namespace std;

int inputValues (int array[], int arraySize) //allows user to input up to fifty positive values. user indicates they are done entering values by entering a negative number. Also finds the number of indexes filled so that the rest of the functions do not include the sentinal value 
{
	int i = 0;
	int valueInput;
	do
	{
		cin >> valueInput;
		if (valueInput >= 0)
		{
			array[i] = valueInput;
			i++;
		}
	}while((valueInput >= 0) && (i < arraySize));
	return (i);
}


void printArray (int array[], int arraySize) //prints filled values
{
	for (int i = 0; i < arraySize; i++)
                cout << array[i] << ' ';
	cout << endl;
}

int findMin (int array[], int arraySize) //finds the minimum entered value
{
	int currentMin = array[0];
	for (int i = 1; i < arraySize; i++)
	{
		if (array[i] < currentMin)
			currentMin = array[i];
	}
	return (currentMin);
}

int findMax (int array[], int arraySize) //finds the maximum entered value
{
        int currentMax = array[0];
        for (int i = 1; i < arraySize; i++)
        {
                if (array[i] > currentMax)
                        currentMax = array[i];
        }
        return (currentMax);
}

int findSum (int array[], int arraySize) //finds the sum of entered values
{
	int currentSum = 0;
	for (int i = 0; i < arraySize; i++) 
		currentSum += array[i];
	return (currentSum);
}

float findAvg (int array[], int arraySize) //uses the findSum function to calculate the average
{
	//returns two decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	int sum = findSum(array, arraySize);
	double average = sum / (float)arraySize;
	return (average);
}

int valueInArray (int value, int array[], int arraySize) //searches for input value in the array, returns the number of times value is in the array
{
	int counter = 0;
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == value)
			counter++;
	}
	return (counter);
}

void allCalc (int array[], int arraySize, int & min, int & max, int & sum, float & average) //one function that runs all calculation functions, inputs these claculations using pass by reference
{
	min = findMin(array, arraySize);
	max = findMax(array, arraySize);
	sum = findSum(array, arraySize);
	average = findAvg(array, arraySize);

}

int main()
{
	const int  MAX_ARRAY_SIZE = 50; //establishes max array size
	int array[MAX_ARRAY_SIZE]; //creates array 
	cout << "Please enter up to 50 non-negative whole numbers separated by space." << endl; 
	cout << "Mark the end of the input list with a negative number: " << endl;
	int trueArraySize = inputValues(array, MAX_ARRAY_SIZE); //runs inputValues function which returns number of filled indexes and allows the user to input values into the array
	printArray(array, trueArraySize); //runs printArray function
	
	//declares variables to be passed by reference
	int min = 0;
	int max = 0;
	int sum = 0;
	float average = 0;

	allCalc(array, trueArraySize, min, max, sum, average); //runs allClac funtion and fills calculation variables
	
	//prints calculated values
	cout << "The minimum value in the array is " << min << endl;
	cout << "The maximum value in the array is " << max << endl;
	cout << "The sum of all the elements in the array is " << sum << endl;
	cout << "The average of all the elements in the array is " << average << endl;
	
	cout << "Please enter the value you want to search in the array: ";
	int searchValue;
	cin >> searchValue;
	int frequency = valueInArray(searchValue, array, trueArraySize); //finds the frequency of first search value
	
	//if frequency is greater than zero, prints that search value is in the array, if frequency is zero, then search value is not in array
	if (frequency > 0)
		cout << "Found your target: " << searchValue << endl; 
	else
		cout << "Could not find " << searchValue << endl;
	
	cout << "Please enter the value you want to know the frequency of: ";
	cin >> searchValue;
	frequency = valueInArray(searchValue, array, trueArraySize); //runs value in array again to find frequency of new input
	cout << "The number " << searchValue << " has occurred " << frequency << " time(s) in the array" << endl;

	return 0;
}
