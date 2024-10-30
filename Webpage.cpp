#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outfile;

	outfile.open("index.html");

	cout << "Enter your name: ";
	string name;
	getline(cin, name);

	cout << "Describe yourself: ";
	string description;
	getline(cin, description);
	
	outfile << "<html>" << endl << "<head>" << endl << "</head>" << endl << "<body>" << endl << "     <center>" << endl << "          <h1>";
	outfile << name << "</h1>" << endl << "     </center>" << endl << "     <hr/>" << endl;
        outfile << description << endl << "     <hr/>" << endl << "</body>" << endl << "</html>" << endl;

	outfile.close();
	return 0;
}
