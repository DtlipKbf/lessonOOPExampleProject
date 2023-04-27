#include "student.h"

class Manager {
public:
	float calcStAvgAge(Student* list, int size);
	float calcStAvgMark(Student* list, int size);
	Student findBestSt(Student* list, int size);
	Student findWorstSt(Student* list, int size);
}