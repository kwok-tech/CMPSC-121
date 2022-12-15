#include <iostream>
using namespace std;

int main() {
	float grade, total;
	int count = 1;
	grade = 0, total = 0;

	while (count <= 3) {
		cout << "Enter a grade: " << count << ": ";
		cin >> grade;
		if (grade < 0 || grade > 100)
			continue;
		count++;
		total += grade;

	}
	double avg = total / 3;
	cout << "Average: " << avg;
	return 0;
}