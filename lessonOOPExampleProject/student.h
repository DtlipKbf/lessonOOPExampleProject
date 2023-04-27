#include "main.h"

class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

protected:

public:
	//default constructor
	Student();

	//constructor with arguments
	Student(string nm, string surnm, int a, float mark);
	Student(string nm, string surnm);

	//copy-constructor
	Student(const Student& st);

	~Student();

	void clear();
	string convert();

	string getName();
	void setName(string n);
	string getSurname();
	void setSurname(string sn);
	int getAge();
	void setAge(int a);
	float getAvg_mark();
	void setAvg_mark(int am);
};