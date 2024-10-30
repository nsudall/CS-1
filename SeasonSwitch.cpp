#include <iostream>
using namespace std;

int main () // start main function
{
	//get month number
	cout << "Enter a month number: ";
	int monthNumber;
	cin >> monthNumber;
	
	//start switch
	switch (monthNumber)
	{
		//winter
		case 12:
		case 1:
		case 2:
			cout << "It is Winter" << endl;
			break;
		
		//spring
		case 3:
                case 4:
                case 5:
                        cout << "It is Spring" << endl;
                        break;

		//summer
		case 6:
                case 7:
                case 8:
                        cout << "It is Summer" << endl;
                        break;
		
		//fall
		case 9:
                case 10:
		case 11:
                        cout << "It is Fall" << endl;
                        break;
		
		default:
			cout <<"Invalid month. Enter number 1-12";
			break;
	}
	
	return 0;
}
