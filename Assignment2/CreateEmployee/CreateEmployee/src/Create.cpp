#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	const int employeeId;
	string name;
	float salary;

public:
	Employee(int e, string n, float s): employeeId(e), name(n), salary(s){

	}

	void displayDetails(){
		cout<<"Employee Details------------"<<endl;
		cout<<"Employee Id: "<<employeeId<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};

int main(){

	Employee emp(1,"sneha",5000);
	emp.displayDetails();

	return 0;
}

/*Why must const members be initialized in initializer list?
 =Const members must be initialized in initializer list because they cannot be assigned after object construction.
Constructor body executes AFTER members are already constructed; const members are immutable post-construction

* What happens if you try to assign the value of a const member inside constructor body?
Compiler generates a compilation error.
Cannot assign to const member inside constructor body as it is already constructed and immutable.

* Why is initializer list faster than assignment?
Initializer list is faster because it performs direct construction (1 operation) while assignment requires default construction + assignment operator (2-3 operations).
Assignment creates temporary objects unnecessarily for complex types like string/vector.
 */




