#include <iostream>
using namespace std;
#include <string>

int main () //start main function
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); // makes doubles show up with two decimal places
	
	//variables
	string firstName;
	int numberOfCoffees;
	int numberOfBagels;
	int numberOfDonuts;
	double coffeePrice = 2.5;
	double bagelPrice = 1.75;
	double donutPrice = 1;
	double taxRate = 0.085;
	double priceBeforeTax;
	double priceAfterTax;
	double amountPaid;
	double change;

	cout <<  "Welcome to our Coffeeshop!" << endl << "What is your first name?";
	cin >> firstName;
	cout << "Welcome " << firstName << endl;
	cout <<	"How many coffees?";
	cin >> numberOfCoffees;
	cout << " How many bagels?";
	cin >> numberOfBagels;
	cout << " How many donuts?";
	cin >> numberOfDonuts;
	// retrives order
	
	priceBeforeTax = numberOfCoffees * coffeePrice + numberOfBagels * bagelPrice + numberOfDonuts * donutPrice;
	priceAfterTax = 1.085 * priceBeforeTax;
	cout << " Your total is: $" << priceAfterTax << endl << "How much will you pay?";
	cin >> amountPaid;
	change = amountPaid - priceAfterTax;
	//calculations
	
	cout << " Receipt for Customer: " << firstName << endl;
	cout << "Coffees: " << numberOfCoffees << endl;
	cout << "Bagels: " << numberOfBagels << endl;
	cout << "Donuts: " << numberOfDonuts << endl;
	cout << "Total is: $" << priceAfterTax << endl;
	cout << "Your change is: $" << change;
	//creates recipt

	return 0;
}//end main function

