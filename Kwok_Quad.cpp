/*********************************************************
* file name: Kwok_6_11.cpp
* programmer name: Jack Kwok
* date created: 11/1/19
* date of last revision: 11/1/19
* details of the revision: none
* short description:  Calculating and Displaying the roots of a function
**********************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double disc(double, double, double);
void quadRoots(double, double, double, double&, double&);

int main() {
	//Prgm Desc
	cout << "This program will calculate and display\n"
		<< "the roots of a function.\n" << endl;
	//vars
	double a, b, c, rootA, rootB;
	//input
	cout << "Enter the coefficients: \n";
	cin >> a >> b >> c;
	
	//calculation
	if (disc(a, b, c) < 0) {
		cout << "no real roots exist.";
	}
	else {
		quadRoots(a, b, c, rootA, rootB);
		if (disc(a, b, c) == 0)
			cout << "The root is " << rootA;
		else
			cout << "The roots are " << rootA << " and " << rootB;
	}
	return 0;
}

double disc(double a, double b, double c) {
	double discriminant = pow(b, 2) - (4 * a * c);
	return discriminant;
}

void quadRoots(double a, double b, double c, double& rootA, double& rootB) {
	if (disc(a, b, c) == 0) {
		cout << "There is one real root.\n";
		rootA = (-1 * b / 2 * a);
	}
	else {
		cout << "There are two real roots.\n";
		rootA = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		rootB = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	}
}

/*
This program will calculate and display
the roots of a function.

Enter the coefficients:
1
3
2
There are two real roots.
The roots are -1 and -2
C:\Users\kwokj\Desktop\CMPSC 121 files\source\repos\102919\Debug\102919.exe (process 53756) exited with code 0.
Press any key to close this window . . .
*/

/*
This program will calculate and display
the roots of a function.

Enter the coefficients:
1
2
1
There is one real root.
The root is -1
C:\Users\kwokj\Desktop\CMPSC 121 files\source\repos\102919\Debug\102919.exe (process 90544) exited with code 0.
Press any key to close this window . . .
*/

/*
This program will calculate and display
the roots of a function.

Enter the coefficients:
19
2
6
no real roots exist.
C:\Users\kwokj\Desktop\CMPSC 121 files\source\repos\102919\Debug\102919.exe (process 3684) exited with code 0.
Press any key to close this window . . .

*/