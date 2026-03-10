#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	int rollNumber;
	double marks;
	string name;

public:

		Student(){
		    rollNumber = 0;
		    marks = 0.0;
		    name = "Unknown";
		}


/*	Student(int r, double m, string n){
		rollNumber =r;
		marks=m;
		name=n;
	}
*/
	Student(int rollNumber, double marks, string name){
		this->rollNumber =rollNumber;
		this->marks=marks;
		this->name=name;
	}


	void printDetails(){
		cout<<"Roll number : "<<rollNumber<<endl;
		cout<<"Marks: "<<marks<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"-------------------------"<<endl;
	}

};

int main(){

	Student s1;
	Student s2(1, 80.0,"Sneha");
	Student s3(2, 90.0,"Suraj");

	cout<<"Print Details"<<endl;
	s1.printDetails();
	s2.printDetails();
	s3.printDetails();

	return 0;
}

/*
 * When does compiler generate a default constructor?
  =A default constructor is a constructor that takes no parameters and can be called as ClassName obj;
  Compiler generates default constructor when NO user-declared constructors exist in the class.
If ANY constructor (parameterized, copy, etc.) is declared, compiler generates NOTHING.

* When does it NOT generate one?
 =Compiler does NOT generate default constructor when ANY user-declared constructor exists in the class

*  Can constructors be overloaded?
 =Yes, constructors can be overloaded.
Multiple constructors with same name but different parameter lists (number, type, or order) are allowed in a class.
 */

