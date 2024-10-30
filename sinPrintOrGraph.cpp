#include <iostream>
using namespace std;
#include <cmath>
const double MYPI = 3.14159265358979323846;

double degrees2radians (double degrees) //converts degrees to radians so user can input in degrees (userfriendly) but sin calculations can occur
{
	double radians;
	radians = (degrees * MYPI)/180;
	return (radians);
}

void drawline (char character, int numRepetitions) //draws a line with character of choice
{
	for (int i = 1; i <= numRepetitions; i++)
		cout << character;
	cout << endl;
}

void doPrinting (double maxAngle, double angleIncrement, char character, int numOfCharacters) // prints the sin values at different intervals, draws lines at ninety intervals
{
	for (int angle = 0; angle <= maxAngle; angle += angleIncrement)
	{
		double Radians = degrees2radians (angle);
		double answer = sin(Radians);
		cout << "sin(" << angle << ") = " << answer << endl;
		if (angle % 90 == 0)
		{	
			drawline (character, numOfCharacters);
		}
	}
}

void doGraphing (double maxAngle, double angleIncrement) //Draws sin graph sideways. uses sin calculation to determine number of spaces
{
	for (double angle = 0; angle <= maxAngle; angle += angleIncrement)
	{
		double Radians = degrees2radians (angle);
		double spaces = sin(Radians) * 20 + 20;
		for (int i = 1; i <= spaces; i++)
			cout << ' ';
		cout << 'X' << endl;
	}
}

int main()
{
	//forces five decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(5);
	
	cout << "Perform calculations from angle=0 to what value (in degrees)? ";
	int maxDegreesInput;
	cin >> maxDegreesInput;
	
	cout << "How often should the angle be incremented? ";
	int angleIncrementInput;
	cin >> angleIncrementInput;
	
	cout << "Graph it? ";
	char graph;
	cin >> graph;

	if (graph == 'N' || graph == 'n')//for printing only
	{
		cout << "Make the line from what character? ";
        	char characterInput;
        	cin >> characterInput;

        	cout << "How many characters form a line? ";
        	int numRepetitionsInput;
        	cin >> numRepetitionsInput;
	
		doPrinting (maxDegreesInput, angleIncrementInput, characterInput, numRepetitionsInput);
	}

	else if (graph =='Y' || graph == 'y') //for graphing only
		doGraphing (maxDegreesInput, angleIncrementInput);

	return 0;
}
