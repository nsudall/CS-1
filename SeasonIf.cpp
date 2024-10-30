#include <iostream>
using namespace std;

int main () //start main function
{
	//get month number
	cout << "Enter a month number: ";
	int monthNumber;
	cin >> monthNumber;

	//if winter
	if (monthNumber == 12 || monthNumber >= 1 && monthNumber <= 2)
		cout << "It is Winter";

	//if spring	       
	if (monthNumber >= 3 && monthNumber <= 5)
		cout << "It is Spring";

	//if summer
	if (monthNumber >= 6 && monthNumber <= 8)
		cout << "It is Summer";

	//if fall
	if (monthNumber >= 9 && monthNumber <= 11)
		cout << "It is Fall";

	//if invalid
	if (monthNumber < 1 || monthNumber > 12)
		cout << "Invalid month. Enter number 1-12";
	
	return 0;

} // end main function
