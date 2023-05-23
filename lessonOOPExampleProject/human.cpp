#include "human.h"

Human::Human() {
	name = "no name";
	surname = "no surname";
	age = 15;
}

Human::Human(string name, string surname, int age) {
	this->name = name;
	this->surname = surname;
	this->age = age;
}

Human::~Human() {}

string Human::getName() {
	return name;
}
void Human::setName(string name) {
	this->name = name;
}
string Human::getSurname() {
	return surname;
}
void Human::setSurname(string surname) {
	this->surname = surname;
}
int Human::getAge() {
	return age;
}
void Human::setAge(int age) {
	if(age < 100 && age>0) this->age = age;
}

string Human::convert() {
	string msg = "";
	msg += name + " " + surname;
	msg += " (age: " + to_string(age) + ")";
	return msg;
}