#include <iostream>
using namespace std;
#include <string>

string time2greeting (int time)//determines greeting based on time input
{
	int timeCalc = time; //used in time calculations so user input is not altered
	
	while (timeCalc >= 100 ) //determines the last two digits, allows for invalid output if minutes is greater that sixty
		timeCalc -= 100;
	if (timeCalc >= 60 || time < 0 || time >= 2400) //determines all invalid outputs (minutes>sixty, negative time, time greater than twentyfour hours
		return ("That is an illegal time");
	else
	{
		if (time >=  400 && time < 1200)
			return ("Good Morning");
		else if (time >= 1200 && time < 1700)
			return ("Good Afternoon");
		else if (time >= 1700 && time <= 2300)
		       	return ("Good Evening");
		else
			return ("What are you doing up");

	}
}

int main ()
{
	cout << "What is your name? ";
	string name;
	cin >> name;
	cout << "What time is it? (0-2400)";
	int timeInput;
	cin >> timeInput;
	string greeting;
	greeting = time2greeting(timeInput);
	cout << greeting << ", " << name << endl;
}
