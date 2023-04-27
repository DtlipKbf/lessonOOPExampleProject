class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

protected:

public:
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
	Student(const Student& st) {
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

	string convert() {
		string msg = "";
		msg += name + " " + surname;
		msg += " (age: " + to_string(age);
		msg += ", average mark: " + to_string(avg_mark) + ")";
	}
};