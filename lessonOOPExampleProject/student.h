#include "human.h"

class Student : public Human {
private:
	static int count;
	float avg_mark;

public:
	Student();
	Student(string nm, string surnm, int a, float mark);
	~Student();

	static int getCount();
	float getAvg_mark();
	void setAvg_mark(int am);
};