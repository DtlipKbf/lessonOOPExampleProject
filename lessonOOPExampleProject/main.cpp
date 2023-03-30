#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
	
	void clear() {
	name = " no name";
	surname = " no surname";
	age = 0;
	avg_mark = 0.0;
        }
	string convert(){
		string msg = "";
		msg += name " " + surname;
		mag += " (age: " + to_string(age);
		msg += ", average mark: " + to_string(avg_mark) + ")";
	}		
};



int main() {
	Student st1;
	
	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 9.8;
	
	cout < "Before: " << endl;
	cout << st1.convert << endl;

	ct1.clear
	
	cout < "\nAfter: " << endl;
	cout << st1.convert << endl;
	
	return 0;
}
