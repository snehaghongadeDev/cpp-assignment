#include <iostream>
#include <string>
using namespace std;
/*
int main(){
	string s1 = "Math";
	string s2 = "Science";
	string s3 = "English";
	string s4 = "Marathi";
	string s5 = "Hindi";

	float M1 = 50;
	float M2 = 60;
	float M3 = 70;
	float M4 = 80;
	float M5 = 90;

	float Total = M1 + M2 + M3 + M4 + M5 ;
	float percentage = (Total / 5.0 ) ;

	cout<<"Percentage is \n " << percentage ;

	string grade =
	    (percentage >= 75.0) ? "A" :
	    (percentage >= 60.0) ? "B" :
	    (percentage >= 45.0) ? "C" : "Fail";

	cout << "Grade: " << grade;

	return 0;
}
*/

 int main() {
    // Subject names
    string subjects[] = {"Math", "Science", "English", "Marathi", "Hindi"};

    // Marks of 5 subjects (out of 100)
    float marks[5] = {50, 60, 70, 80, 90};

    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }

    float percentage = total / 5.0;   // average per subject (percentage)

    // Use ternary operator for grade (no if-else)
    string grade =
        (percentage >= 75.0) ? "A" :
        (percentage >= 60.0) ? "B" :
        (percentage >= 45.0) ? "C" : "Fail";

    // Print all subject marks
    cout << "Subject marks: ";
    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << "(" << marks[i] << ") ";
    }
    cout << endl;

    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}




