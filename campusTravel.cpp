#include <iostream>
using namespace std;

int main () //start main function
{
	//variables
	int distLeft = 14;
	int turnsLeft = 4;
	int travelType;
	bool travelTypeInvalid = false; //for checking if there is a valid value in travelType 
	
	cout << "You are " << distLeft << " mile(s) from campus!" << endl;
	while (turnsLeft > 0 && distLeft > 0)//keep playing if still have turns and did not overshoot campus and not at campus
	{
		cout << "How do you wish to travel? (1 bus, 2 subway, 3 jetpack) ";
		cin >> travelType;

		do //creates loop if invalid travel type
		{
			switch (travelType)
			{	
				case 1://bus
					distLeft = distLeft - 2;
					travelTypeInvalid = false;
					break;
				case 2://subway
					distLeft = distLeft - 5;
					travelTypeInvalid = false;
					break;
				case 3://jetpack
					distLeft = distLeft - 10;
					travelTypeInvalid = false;
					break;
				default://invalid
					cout << "Invalid choice, try again!" << endl;
					travelTypeInvalid = true;
					cout << "How do you wish to travel? (1 bus, 2 subway, 3 jetpack) ";
					cin >> travelType;
					break;
			}
		}while (travelTypeInvalid == true);
		
		if (distLeft >= 0)//only print distance from campus when it is greater than zero
		{
			cout << "You are " << distLeft << " mile(s) from campus!" << endl;
			turnsLeft = turnsLeft - 1;
		}

	}



	if (distLeft == 0) //printing out win or lose
		cout << "You have won!" << endl;
	else
	{	
		if (distLeft < 0)
			cout << "You have over-shot your target!" << endl;
		if (distLeft > 0)
			cout << "You haven't reached your target!" << endl;
		cout << "You lose!" << endl;
	}

	return 0;
}
