/*********************************************************
* file name: Kwok_5_10.cpp
* programmer name: Jack Kwok
* date created: 10/8/19
* date of last revision: 10/8/19
* details of the revision: none
* short description:  This program will calculate
**********************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name1, name2, name3;
	float time1, time2, time3;
	double first, second, third;

	cout << "This displays who came 1st , 2nd, 3rd.\n\n";

	cout << "Enter name1: ";
	getline(cin, name1);
	cout << "Enter name2: ";
	getline(cin, name2);
	cout << "Enter name3: ";
	getline(cin, name3);
	cout << "Enter time1: ";
	cin >> time1;
	cout << "Enter time2: ";
	cin >> time2;
	cout << "Enter time3: ";
	cin >> time3;

	while (time1 < 0 || time2 < 0 || time3 < 0)
	{
		cout << "\n\nThe times must be greater than 0.\n\n";
		cout << "Enter name1: ";
		getline(cin, name1);
		cout << "Enter name2: ";
		getline(cin, name2);
		cout << "Enter name3: ";
		getline(cin, name3);
		cout << "Enter time1: ";
		cin >> time1;
		cout << "Enter time2: ";
		cin >> time2;
		cout << "Enter time3: ";
		cin >> time3;
	}

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);

	cout << "\n\n";

	if (time1 < time2 && time1 < time3)
	{
		first = time1;
		cout << name1 << " came in 1st with a time of " << first << endl;
	}
	else if (time2 < time1 && time2 < time3)
	{
		first = time2;
		cout << name2 << " came in 1st with a time of " << first << endl;
	}
	else if (time3 < time1 && time3 < time2)
	{
		first = time3;
		cout << name3 << " came in 1st with a time of " << first << endl;
	}

	if (time1 < time3 && time1 > time3)
	{
		second = time1;
		cout << name1 << " came in 2nd with a time of " << second << endl;
	}
	else if (time2 < time3 && time2 > time1)
	{
		second = time2;
		cout << name2 << " came in 2nd with a time of " << second << endl;
	}
	else if (time3 < time2 && time3 > time1)
	{
		second = time3;
		cout << name3 << " came in 2nd with a time of " << second << endl;
	}

	if (time1 > time2 && time1 > time3)
	{
		third = time1;
		cout << name1 << " came in 3rd with a time of " << third << endl;
	}
	else if (time2 > time1 && time2 > time3)
	{
		third = time2;
		cout << name2 << " came in 3rd with a time of " << third << endl;
	}
	else if (time3 > time1 && time3 > time2)
	{
		third = time3;
		cout << name3 << " came in 3rd with a time of " << third << endl;
	}
	return 0;
}
