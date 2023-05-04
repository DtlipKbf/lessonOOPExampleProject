#include "manager.h"

int main() {
	Student st1("ivan", "ivanov", 15, 8.3);
	Student st2("harry", "poter", 16, 9.2);
	Student st3("peter", "pen", 14, 7.6);

	Group group;
	group.add(st1);
	group.add(st2);
	group.add(st3);

	Student s = Manager::findBestSt(group);
	cout << "best st: " << s.convert();
	return 0;
}