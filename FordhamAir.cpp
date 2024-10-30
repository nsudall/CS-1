#include <iostream>
using namespace std;

int main ()//start main function
{
	//variables
	char destination; //[C]hicago, [M]iami, [P]ortland
	int departureTime; //Military time
	char dayType; //week[E]nd, week[D]ay
	double ticketPrice;
	int numTickets;
	double totalPrice;
	double amountPaid;
	double change;
	bool isWeekend = false;
	bool isDayFlight = false;

	//set decimal precision
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//get flight information
	cout << "Welcome to Fordham Airlines!" << endl;
	cout << "What is your destination? ([C]hicago, [M]iami, [P]ortland) ";
	cin >> destination;
	cout << "What time will you travel? (Enter time between 0-2359) ";
	cin >> departureTime;
	cout << "What type of day are you traveling? (week[E]nd or week[D]ay) ";
	cin >> dayType;

	//price calculations
	if (dayType == 'E' || dayType == 'e')
		isWeekend = true;

	if (departureTime >= 500 && departureTime <= 1900)
		isDayFlight = true;
	
	if (destination == 'C' || destination == 'c') //chicago pricing
	{
		if (isWeekend && isDayFlight) //weekend day
			ticketPrice = 90;
		else if (isWeekend && isDayFlight == false) //weekend night
			ticketPrice = 60;
		else if (isWeekend == false && isDayFlight) //weekday day
			ticketPrice = 75;
		else if (isWeekend == false && isDayFlight == false) //weekday night
			ticketPrice = 50;
	}

	if (destination == 'M' || destination == 'm') //miami pricing
        {
                if (isWeekend && isDayFlight) //weekend day
                        ticketPrice = 180;
                else if (isWeekend && isDayFlight == false) //weekend night
                        ticketPrice = 120;
                else if (isWeekend == false && isDayFlight) //weekday day
                        ticketPrice = 150;
                else if (isWeekend == false && isDayFlight == false) //weekday night
                        ticketPrice = 100;
        }

	if (destination == 'P' || destination == 'p') //portland pricing
        {
                if (isWeekend && isDayFlight)//weekend day
                        ticketPrice = 360;
                else if (isWeekend && isDayFlight == false) //weekend night
                        ticketPrice = 240;
                else if (isWeekend == false && isDayFlight) //weekday day
                        ticketPrice = 300;
                else if (isWeekend == false && isDayFlight == false) //weekday night
                        ticketPrice = 200;
        }

	//payment info
	cout << "Each ticket will cost: $" << ticketPrice << endl;
	cout << "How many tickets do you want? ";
	cin >> numTickets;
	if ( numTickets > 0) //checks user is buying tickets
	{
		totalPrice = numTickets * ticketPrice;
		cout << "You owe: $" << totalPrice << endl;
		cout << "Amount paid? ";
		cin >> amountPaid;
		if (amountPaid >= totalPrice)//checks user is paying enough
		{
			change = amountPaid - totalPrice;
			cout << "You will get in change: $" << change << endl;
			cout << "Your tickets have been ordered!";
		}
		else
			cout << "That is too little! No tickets ordered.";
	}
	else
		cout << "Number of tickets ordered is invalid. The order has been cancelled";

	return 0;
}
