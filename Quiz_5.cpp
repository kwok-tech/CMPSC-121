/*********************************************************
* file name: Quiz_5.cpp
* programmer name: Jack Kwok
* date created: 11/02/19
* date of last revision: 11/02/19
* details of the revision: none
* short description:  Calculate and Display  the areas and perimeters
**********************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcArea(double, double, char);
double calcPerim(double, double, char);

int main() {
	// Program description
	cout << "This program will calculate and display" <<endl
		<< "  the areas and perimeters\n\n";
	// Declaring the variables: types and names
	int selection;
	char code;
	double s1, s2;

	// Variable initialization: getting the input from the user
	cout << "Geometric Calculator"
		<< "\nChoose one of the following options :\n"
		<< "\n\tPress 1 to enter the sides and shape code."
		<< "\n\tPress 2 to display the area."
		<< "\n\tPress 3 to display the perimeter."
		<< "\n\tPress 4 to exit."
		<< "\nEnter selection : ";
	cin >> selection;
	while (selection != 4) {
		if (selection == 1) {
			cout << "\nPlease enter a value for side 1: ";
			cin >> s1;
			if (s1 < 0) {
				cout << "\nInvaild value.";
				exit(1);
			}
			cout << "\nPlease enter a value for side 2: ";
			cin >> s2;
			if (s2 < 0) {
				cout << "\nInvaild value.";
				exit(2);
			}
			cout << "\nPlease enter the shape code (t/T for right triangle, r/R for rectangle): ";
			cin >> code;
			if (code != 't' && code != 'T' && code != 'r' && code != 'R') {
				cout << "\nPlease enter a vaild shape code: ";
				cin >> code;
			}
		}
		else if (selection == 2) {
			if (code == 't' || code == 'T') {
				cout << "The area of a triangle with sides "
					<< s1 << " and " << s2 << " is: " << calcArea(s1, s2, code);
			}
			else if (code == 'r' || code == 'R') {
				cout << "The area of a rectangle with sides "
					<< s1 << " and " << s2 << " is: " << calcArea(s1, s2, code);
			}
		}
		else if (selection == 3) {
			if (code == 't' || code == 'T') {
				cout << "The perimeter of a triangle with sides "
					<< s1 << " and " << s2 << " is: " << calcPerim(s1, s2, code);
			}
			else if (code == 'r' || code == 'R') {
				cout << "The perimeter of a rectangle with sides "
					<< s1 << " and " << s2 << " is: " << calcPerim(s1, s2, code);
			}
		}
		else {
			cout << "\nInvaild selection.";
		}
		cout << "\nChoose one of the following options :\n"
			<< "\n\tPress 1 to enter the sides and shape code."
			<< "\n\tPress 2 to display the area."
			<< "\n\tPress 3 to display the perimeter."
			<< "\n\tPress 4 to exit."
			<< "\nEnter selection : ";
		cin >> selection;
	}
	// Display the results
		cout << "Thank you for using the geometric calculator. Bye!";
	return 0;
}

double calcArea(double s1, double s2, char c) {
	if (c == 't' || c == 'T') {
		return (0.5 * s1 * s2);
	}
	else {
		return (s1 * s2);
	}

}

double calcPerim(double s1, double s2, char c) {
	if (c == 't' || c == 'T') {
		return (s1+ s2 + sqrt(pow(s1,2)+pow(s2,2)));
	}
	else {
		return (2* (s1 + s2));
	}
}

/*
This program will calculate and display
the areasand perimeters

Geometric Calculator
Choose one of the following options :

Press 1 to enter the sides and shape code.
Press 2 to display the area.
Press 3 to display the perimeter.
Press 4 to exit.
Enter selection : 0

Invaild selection.
Choose one of the following options :

Press 1 to enter the sides and shape code.
Press 2 to display the area.
Press 3 to display the perimeter.
Press 4 to exit.
Enter selection : 1

Please enter a value for side 1 : 9

Please enter a value for side 2 : -1

Invaild value.
C : \Users\kwokj\Desktop\CMPSC 121 files\source\repos\Quiz110319\Debug\Quiz110319.exe(process 60532) exited with code 2.
Press any key to close this window . . .
*/

/*
This program will calculate and display
  the areas and perimeters

Geometric Calculator
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 1

Please enter a value for side 1: 10.0

Please enter a value for side 2: 5.0

Please enter the shape code (t/T for right triangle, r/R for rectangle): h

Please enter a vaild shape code: R

Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 2
The area of a rectangle with sides 10 and 5 is: 50
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 3
The perimeter of a rectangle with sides 10 and 5 is: 30
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 4
Thank you for using the geometric calculator. Bye!
C:\Users\kwokj\Desktop\CMPSC 121 files\source\repos\Quiz110319\Debug\Quiz110319.exe (process 74896) exited with code 0.
Press any key to close this window . . .

*/

/*
This program will calculate and display
  the areas and perimeters

Geometric Calculator
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 1

Please enter a value for side 1: 12

Please enter a value for side 2: 5.0

Please enter the shape code (t/T for right triangle, r/R for rectangle): t

Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 2
The area of a triangle with sides 12 and 5 is: 30
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 3
The perimeter of a triangle with sides 12 and 5 is: 30
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 3
The perimeter of a triangle with sides 12 and 5 is: 30
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 9

Invaild selection.
Choose one of the following options :

		Press 1 to enter the sides and shape code.
		Press 2 to display the area.
		Press 3 to display the perimeter.
		Press 4 to exit.
Enter selection : 4
Thank you for using the geometric calculator. Bye!
C:\Users\kwokj\Desktop\CMPSC 121 files\source\repos\Quiz110319\Debug\Quiz110319.exe (process 18868) exited with code 0.
Press any key to close this window . . .

*/