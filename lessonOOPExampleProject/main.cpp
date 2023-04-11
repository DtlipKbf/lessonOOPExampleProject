#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	//default constructor
	Student() {
		name = "no name";
	    surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//constructor with arguments
	Student(string nm, string surnm, int a, float mark) {
		name = nm;
		surname = surnm;
		age = a;
		avg_mark = mark;
	}

	~Student() {
		cout << "destructor" << endl;
	}
	
	void clear() {
	name = " no name";
	surname = " no surname";
	age = 0;
	avg_mark = 0.0;
        }
	string convert(){
		string msg = "";
		msg += name + " " + surname;
		msg += " (age: " + to_string(age);
		msg += ", average mark: " + to_string(avg_mark) + ")";
	}		
};

int main() {
	Student st1;
	Student st2("Ivan", "ivanov", 14, 10);
	cout << st1.convert() << endl;
	cout << st2.convert() << endl;

	/*st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 9.8;
	
	cout << "Before: " << endl;
	cout << st1.convert() << endl;

	st1.clear();
	
	cout << "\nAfter: " << endl;
	cout << st1.convert() << endl;*/
	
	return 0;
}
