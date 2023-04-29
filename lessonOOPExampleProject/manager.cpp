#include "manager.h"

float Manager::calcStAvgAge(Group group) {
	float avg = 0;

	for (int i = 0; i < group.getSize(); i++) {
		// Student st = group.getStudent(i)  st.getAge()
		avg += group.getStudent(i).getAge();
	}
	return avg / group.getSize();
}

