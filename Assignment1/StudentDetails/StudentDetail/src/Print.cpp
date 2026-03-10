#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	string name;
	int rollNumber;
	float marks;
	char grade;

public:

	 Student() {
	        name = ""; rollNumber = 0; marks = 0; grade = ' ';
	    }

	Student(string n, int r,float m, char g){
		name=n;
		rollNumber=r;
		marks = m;
		grade= g;
	}

	void setName(string n){
		this->name =n;
	}
	void setRollNumber(int r){
		this->rollNumber =r;
	}
	void setMarks(float m){
		this->marks= m;
	}
	void setGrade(char g){
		this->grade =g;
	}

	string getName(){
		return name;
	}
	int getRollNumber(){
		return rollNumber;
	}
	float getMarks(){
		return marks;
	}
	char getGrade(){
		return grade;
	}

	void acceptInformation() {
	        cout << "\nEnter Name: ";
	        cin.ignore();
	        getline(cin, name);
	        cout << "Enter Roll Number: ";
	        cin >> rollNumber;
	        cout << "Enter Marks: ";
	        cin >> marks;
	    }

	    void displayInformation() {
	        cout << "\n=== Student Details ===";
	        cout << "\nName: " << name;
	        cout << "\nRoll No: " << rollNumber;
	        cout << "\nMarks: " << marks;
	        cout << "\nGrade: " << grade << endl;
	    }

	 void calculateGrade() {
	        if (marks >= 90 && marks <= 100) {
	            grade = 'A';
	        } else if (marks >= 80) {
	            grade = 'B';
	        } else if (marks >= 70) {
	            grade = 'C';
	        } else if (marks >= 60) {
	            grade = 'D';
	        } else {
	            grade = 'F';
	        }
	    }

};

int main(){
	Student s1;
	    int choice;

	    while(true) {
	        cout << "\n=== STUDENT MANAGEMENT ===";
	        cout << "\n1. Accept Information";
	        cout << "\n2. Display Information";
	        cout << "\n3. Calculate Grade";
	        cout << "\n4. Exit";
	        cout << "\nEnter choice (1-4): ";
	        cin >> choice;

	        switch(choice) {
	            case 1:
	                s1.acceptInformation();
	                break;

	            case 2:
	                s1.displayInformation();
	                break;

	            case 3:
	                s1.calculateGrade();
	                cout << "\nGrade calculated successfully!" << endl;
	                break;

	            case 4:
	                cout << "\nThank you!" << endl;
	                return 0;

	            default:
	                cout << "\nInvalid choice! Try again." << endl;
	        }
	    }


	return 0;
}
