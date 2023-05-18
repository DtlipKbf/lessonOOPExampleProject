#include "human.h"

Human::Human() {
	cout << "human default constractor" << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
}

Human::Human(string nm, string surnm, int a) {
	name = nm;
	surname = surnm;
	age = a;
}

Human::~Human() {
	cout << "human destractor" << endl;
}

string Human::getName() {
	return name;
}
void Human::setName(string n) {
	name = n;
}
string Human::getSurname() {
	return surname;
}
void Human::setSurname(string sn) {
	surname = sn;
}
int Human::getAge() {
	return age;
}
void Human::setAge(int a) {
	age = a;
}

string Human::convert() {
	string msg = "";
	msg += name + " " + surname;
	msg += " (age: " + to_string(age) + ")";
	return msg;
}