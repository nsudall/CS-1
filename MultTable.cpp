#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int ROWSIZE = 12;//const for array size
	const int COLSIZE = 10;//const for array size

	int multArray[ROWSIZE][COLSIZE]; //create two D array
	
	// for each row
	for (int rowIndex = 0; rowIndex < ROWSIZE; rowIndex++)
	{
		// do one row
		for( int colIndex = 0; colIndex < COLSIZE; colIndex++)
		{
			//compute the value in the multArray
			int value = (rowIndex + 1) * (colIndex + 1);
			multArray[rowIndex][colIndex] = value;
		}
	}

	for (int rowIndex = 0; rowIndex < ROWSIZE; rowIndex++)
	{
		// do one row
		for( int colIndex = 0; colIndex < COLSIZE; colIndex++)
		{
			cout << setw(6) << multArray[rowIndex][colIndex];
		}
		
		cout << endl;
	}

	return 0;
}
