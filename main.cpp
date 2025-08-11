#include <iostream>
#include <string>
#include <vector>
using namespace std;

class STUDENT {                //this outputs name, age=0 and ID=0, empty class basically, ready to take in data

public:

	STUDENT() {

		name ;                 //constructor that initializes variables
		age = 0;
		ID = 0;

	}

	void set_name(string studentname) {

		name = studentname;

	}
	string get_name() {

		return name;

	}
	void set_age(int studentage) {

		age = studentage;

	}
	int get_age() {

		return age;

	}
	void set_ID(int studentid) {

		ID = studentid;

	}
	int get_ID() {

		return ID;

	}

	void EnterStudentInfo() {

		string studentname;
		int studentage;
		int studentID;

		cout<<"Enter student name"<<endl;
		cin>>studentname;
		set_name(studentname);
		cout<<"Enter student age"<<endl;
		cin>>studentage;
		set_age(studentage);
		cout<<"Enter student ID"<<endl;
		cin>>studentID;
		set_ID(studentID);

	}

	void DISPLAY () {                    //display method

		cout<<"Student name is: "<<get_name()<<endl<<"Student age is: "<<get_age()<<endl<<"Student ID is: "<<get_ID()<<endl;

	}

private:

	string name;
	int age;
	int ID;


};

int Menu(int option, vector<STUDENT*>& students) {

	switch (option) {

	case 1:
	   {	cout<<"Add student"<<endl;
		STUDENT* ptr = new STUDENT();
	    ptr->EnterStudentInfo();
	    students.push_back(ptr);
		break;}
	case 2:
		{cout<<"View students"<<endl;
		for (auto s : students) {
                    s->DISPLAY();
                }
		break;}
	case 3:
		cout<<"Exit"<<endl;
		break;

	}
	return 0;
}

int Loop(vector<STUDENT*>& students) {
     int option;
	do {

		cout<<"Choose option 1 for add student, 2 for view students or 3 for exit"<<endl;
		cin>>option;
		Menu(option, students);

	}

	while (option != 3);
	return 0;

}

int main()
{

	vector <STUDENT*> NewStudents;
	Loop(NewStudents);
    for (auto s : NewStudents) {
        delete s;
    }
	return 0;
}
