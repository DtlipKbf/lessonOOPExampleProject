#include"student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

Student::Student() : Human() {
	count++;	
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string name, string surname, int age, float mark) 
	: Human(name, surname, age) {
	count++;
	avg_mark = mark;
}

Student::~Student() {
	count--;
}

float Student::getAvg_mark() {
	return avg_mark;
}
void Student::setAvg_mark(int avg_mark) {
	this->avg_mark = avg_mark;
}