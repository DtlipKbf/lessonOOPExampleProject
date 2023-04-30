#include "manager.h"

float Manager::calcStAvgAge(Group group) {
	float avg = 0;

	for (int i = 0; i < group.getSize(); i++) {
		// Student st = group.getStudent(i)  st.getAge()
		avg += group.getStudent(i).getAge();
	}
	return avg / group.getSize();
}

float Manager::calcStAvgMark(Group group){
	float avg = 0;

	for (int i = 0; i < group.getSize(); i++) {
		avg += group.getStudent(i).getAvg_mark();
	}

	return avg / group.getSize();
}

Student Manager::findBestSt(Group group){
	Student st = group.getStudent(0);

	for (int i = 1; i < group.getSize(); i++) {
		if (st.getAvg_mark() < group.getStudent(i).getAvg_mark()) {
			st = group.getStudent(i);
		}
	}

	return st;
}
Student Manager::findWorstSt(Group group){
	Student st = group.getStudent(0);

	for (int i = 1; i < group.getSize(); i++) {
		if (st.getAvg_mark() > group.getStudent(i).getAvg_mark()) {
			st = group.getStudent(i);
		}
	}

	return st;
}