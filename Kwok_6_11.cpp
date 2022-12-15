/*********************************************************
* file name: Kwok_6_11.cpp
* programmer name: Jack Kwok
* date created: 11/1/19
* date of last revision: 11/1/19
* details of the revision: none
* short description:  Calculating the average of a group of scores where the lowest score is dropped
**********************************************************/
#include <iostream>
#include<iomanip>
using namespace std;

void getScore(int& score);
void calcAverage(int x[5]);
int findLowest(int x[5]);

int main() {
	//Program Description
	cout << "This program will calculate and display\n"
		<< "the average of a group of scores where the lowest score is dropped\n" << endl;
	//Vars
	int score[5];
	//User input
	for (int i = 0; i < 5; i++) {
		getScore(score[i]);
	}

	//Calculation and Output
	cout << "The lowest test score is " << findLowest(score) << endl;
	calcAverage(score);
	return 0;

}
void getScore(int& score) {
	cout << "Please enter your test score: ";
	cin >> score;

	while (score < 0 || score > 100)
	{
		cout << "ERROR please enter grades between the values 0 and 100";
		cin >> score;
	}
}

void calcAverage(int param[5]) {
	double sum = 0, x = 0, avg;
	for (int i = 0; i < 5; i++) {
		if (param[i] == findLowest(param) && x == 0) {
			x += 1;
		}
		else {
			sum += param[i];
		}
	}
	avg = sum / 4.0;
	//Numeric output
	cout << fixed << setprecision(2);
	cout << "The average of the 4 highest test scores entered is: " << avg << endl;

}

int findLowest(int param[5]) {
	int lowest = param[0];
	for (int i = 1; i < 5; i++) {
		if (param[i] < lowest)
			lowest = param[i];
	}

	return lowest;
}



/*
This program will calculate and display
the average of a group of scores where the lowest score is dropped

Please enter your test score: 0
Please enter your test score: -1
ERROR please enter grades between the values 0 and 100
*/

/*
This program will calculate and display
the average of a group of scores where the lowest score is dropped

Please enter your test score: 101
ERROR please enter grades between the values 0 and 100
*/

/*
This program will calculate and display
the average of a group of scores where the lowest score is dropped

Please enter your test score: 20
Please enter your test score: 30
Please enter your test score: 30
Please enter your test score: 30
Please enter your test score: 30
The lowest test score is 20
The average of the 4 highest test scores entered is: 30.00
*/

/*
This program will calculate and display
the average of a group of scores where the lowest score is dropped

Please enter your test score: 90
Please enter your test score: 98
Please enter your test score: 100
Please enter your test score: 70
Please enter your test score: 89
The lowest test score is 70
The average of the 4 highest test scores entered is: 94.25
*/

