// CPP program to demonstrate the
// cosh() function when string passed
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah 
	I.D.E : VS2019
*/

using namespace std;

int main() {
	string x = "gfg";
	double result;

	result = cosh(x);
	cout << "cosh("gfg") = " << result << endl;

	_getch();
	return 0;
}
