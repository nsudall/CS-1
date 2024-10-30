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

	cout << "Hello! Welcome to the Coder Coffeeshop!, What is your first name?" << endl;
	cin >> firstName;
	cout << endl << "Nice to meet you " << firstName <<"! How many coffees would you like to order?" << endl;
	cin >> numberOfCoffees;
	cout << endl << "Awesome! And how many bagels?" << endl;
	cin >> numberOfBagels;
	cout << endl << "Cool! Lastly how many donuts?" << endl;
	cin >> numberOfDonuts;
	// retrives order
	
	priceBeforeTax = numberOfCoffees * coffeePrice + numberOfBagels * bagelPrice + numberOfDonuts * donutPrice;
	priceAfterTax = 1.085 * priceBeforeTax;
	cout << endl << "Your total is " << priceAfterTax << " How much will you pay?" << endl;
	cin >> amountPaid;
	change = amountPaid - priceAfterTax;
	//calculations
	
	cout << "Recipt for " << firstName << endl;
	cout << "Coffees: " << numberOfCoffees << endl;
	cout << "Bagels: " << numberOfBagels << endl;
	cout << "Donuts: " << numberOfDonuts << endl;
	cout << "Total is: " << priceAfterTax << endl;
	cout << "Change total: " << change;
	//creates recipt

	return 0;
}//end main function

