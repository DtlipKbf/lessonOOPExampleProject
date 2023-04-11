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

	Student(string nm, string surnm) {
		name = nm;
		surname = surnm;
	}

	//copy-constructor
	Student(const Student &st) {
		name = st.name;
		surname = st.surname;
		age = st.age;
		avg_mark = st.avg_mark;
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

//void test(Student st) {
//
//}

Student test() {
	Student st;
	return st;
}

int main() {
	//Student st1;								//calling default-constructor
	Student st2("Ivan", "Ivanov", 14, 10);		//calling constructor with arguments
	//Student st3("Dima", "Gus");					//calling copy-constructor 
	//Student st4(st2);							//calling copy-constructor 		
	//Student st5 = st2;

	//cout << st4.convert() << endl;
	
	//test(st2);
	Student st = test(); //copy-constructor

	return 0;
}