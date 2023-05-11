#include "manager.h"

int main() {
	Student st1("ivan", "ivanov", 15, 8.3);
	Student st2("harry", "poter", 16, 9.2);
	Student st3("peter", "pen", 14, 7.6);

	cout << "Number of student: " << Student::getCount() << endl;
	return 0;
}