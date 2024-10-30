#include <iostream>
using namespace std;

//code created by nicki sudall. It creates an array with ten indexes and then enters the value of the index plus one hundered

int main ()
{
	const int ARRAY_SIZE = 10; //creates constant for array index size
	int firstArray[ARRAY_SIZE]; // create array

	for (int i = 0; i < 10; i++) // for loop that enters values into each index
	{
		firstArray[i] = i + 100;
		cout << "firstArray[" << i << "]=" << firstArray[i] << endl;
	}

	return 0;
}
