#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;
};

int main() {
	Student st1;
	
	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 9.8;
	
	Student st2 = st1;
	
	cout < "Before: " << endl;
	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;
	
	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avg_mark << endl;
	
	st1.avg_mark = 7.2;
	
	cout < "\nAfter: " << endl;
	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;
	
	cout << st2.name << endl;
	cout << st2.surname << endl;
	cout << st2.age << endl;
	cout << st2.avg_mark << endl;
	
	
	return 0;
}
