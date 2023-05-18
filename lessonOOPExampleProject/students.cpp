#include"student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

Student::Student() : Human() {
	cout << "student default constractor" << endl;

	count++;	
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) 
	: Human(nm, surnm, a) {
	count++;
	avg_mark = mark;
}

Student::~Student() {
	cout << "student destractor" << endl;
	count--;
}

float Student::getAvg_mark() {
	return avg_mark;
}
void Student::setAvg_mark(int am) {
	avg_mark = am;
}