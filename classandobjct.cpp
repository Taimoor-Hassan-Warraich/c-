#include<iostream>
#include<string>

using namespace std;

class Student {
	int id;
	int rollnumber;
	string  name;

public:

	Student() {
		//cout << "Constructor Called" << endl;
	}

	void  Set() {
		cout << "Enter ID " << endl;
		cin >> id;
		cout << "Enter Roll #" << endl;
		cin >> rollnumber;
		cout << "Enter Name " << endl;
		cin >> name;
	}

	void Get() {
		cout << "ID		" << " is " << id << endl;
		cout << "Roll # " << " is " << rollnumber << endl;
		cout << "Name	" << " is " << name << endl << endl << endl;
	}

};

int main() {

	int studentCounter = 0; // Counts the number of students saved in array
	Student students[10]; // maximum 10 students can be stored in it

	int option = 1;
	while (option != 0)
	{
		cout << "********************* Options ************************" << endl;
		cout << "1. Add New Student" << endl;
		cout << "2. Show All Students" << endl;
		cout << "0. Exit Application" << endl;
		cout << "Enter an option : ";
		cin >> option;     
		if (option == 1) { 
			if (studentCounter < 10) {
				Student student;
				student.Set();
				students[studentCounter] = student;
				system("cls");
				cout << "*** New Student has been saved" << endl << endl;
				studentCounter++;
			}
			else {
				cout << "### Not enough capacity for saving new student" << endl;
			}
		}
		else if (option == 2) {
			if (studentCounter > 0) {
				for (size_t i = 0; i < studentCounter; i++)
				{
					students[studentCounter].Get();
				}
			}
			else {
				system("cls");
				cout << "### No student found in database" << endl << endl;
			}
		}
	}
	system("pause");
	return 0;

}


