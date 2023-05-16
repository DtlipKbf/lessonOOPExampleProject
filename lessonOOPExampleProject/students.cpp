#include"student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

Student::Student() {
	count++;
	setName("no name");
	setSurname("no surname");
	setAge(150);
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) {
	count++;
	setName(nm);
	setSurname(surnm);
	setAge(a);
	avg_mark = mark;
}

Student::~Student() {
	count--;
}

float Student::getAvg_mark() {
	return avg_mark;
}
void Student::setAvg_mark(int am) {
	avg_mark = am;
}