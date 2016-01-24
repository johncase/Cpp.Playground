//https://www.youtube.com/watch?v=iPlW5tSUOUM

#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "Student.cpp"
using namespace std;

void fillVector(vector<Student>&);
void printStudent(const vector<Student>&);


//** MAIN **//
int main(){

	vector<Student> myStudents;
	fillVector(myStudents);
	printStudent(myStudents);

	cout << endl;
	return 0;
}


//** FUNCTIONS **//
void fillVector(vector<Student>& vectorName){
	string sName;
	char sGrade;

	cout << "How Many Students: ";
	unsigned int numStudents = 0;
	cin >> numStudents;

	int unsigned i = 0;
	for(i = 0; i < numStudents; i++){
		//enter student name
		cout << "Student name: ";
		cin >> sName;

		//enter students grade
		cout << "Student grade: ";
		cin >> sGrade;

		//pass the variables above to a class object
		Student newStudent(sName, sGrade);

		//push_back the new class object to vector
		vectorName.push_back(newStudent);

		cout << endl;
	}
	cout << endl;
}

void printStudent(const vector<Student>& vectorName){
	unsigned int i = 0;
	for(i = 0; i < vectorName.size(); i++){

		//vectorName.at(i).getName(); also works
		cout << "Student name: " << vectorName[i].getName() << endl;

		//vectorlocation.class_function;
		cout << "Student grade: " << vectorName[i].getGrade() << endl;
	}
}