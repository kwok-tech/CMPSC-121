//11/19/19 In class

#include <iostream>
using namespace std;

const int NUM_EXAMS = 3;
struct StuData {
	string lastName;
	float exam[NUM_EXAMS];
	float avgGrade;
	char letterGrade;
};
//Prototypes
void getStudentData(StuData&);
void calcGrade(StuData&);
void letterGrade(float avg);
void displayStudentData(StuData);

int main() {

	return 0;
}

void getStudentData(StuData & student) {
	cout << "Last Name: ";
	cin >> student.lastName;
	for (int i = 0; i < NUM_EXAMS; i++) {
		cout << "Exam " << i + 1 << ": ";
		cin >> student.exam[i];
	}
}
void calcGrade(StuData& student) {

}