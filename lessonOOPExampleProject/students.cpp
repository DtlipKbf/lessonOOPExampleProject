#include"student.h"


int Student::count = 0;

int Student::getCount() {
	return count;
}

//default constructor
Student::Student() {
	count++;
	name = "no name";
	surname = "no surname";
	age = 15;
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surnm, int a, float mark) {
	count++;
	name = nm;
	surname = surnm;
	age = a;
	avg_mark = mark;
}

Student::Student(string nm, string surnm) {
	count++;
	name = nm;
	surname = surnm;
}

//copy-constructor
Student::Student(const Student& st) {
	count++;
	name = st.name;
	surname = st.surname;
	age = st.age;
	avg_mark = st.avg_mark;
}

Student::~Student() {
	count--;
}

void Student::clear() {
	name = " no name";
	surname = " no surname";
	age = 0;
	avg_mark = 0.0;
}

string Student::convert() {
	string msg = "";
	msg += name + " " + surname;
	msg += " (age: " + to_string(age);
	msg += ", average mark: " + to_string(avg_mark) + ")";
	return msg;
}

string Student::getName() {
	return name;
}
void Student::setName(string n) {
	name = n;
}
string Student::getSurname() {
	return surname;
}
void Student::setSurname(string sn) {
	surname = sn;
}
int Student::getAge() {
	return age;
}
void Student::setAge(int a) {
	age = a;
}
float Student::getAvg_mark() {
	return avg_mark;
}
void Student::setAvg_mark(int am) {
	avg_mark = am;
}