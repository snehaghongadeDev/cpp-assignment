#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;
    static int nextID;

public:
    Employee() : empID(0), empName(""), empSalary(0.0), grossSalary(0.0) {}

    Employee(string name, double salary) {
        empID = nextID++;
        empName = name;
        empSalary = salary;
        calculateGrossSalary();
    }

    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) {
        if (salary >= 0) {
            empSalary = salary;
            calculateGrossSalary();
        }
    }

    int getEmpID() { return empID; }
    string getEmpName() { return empName; }
    double getEmpSalary() { return empSalary; }
    double getGrossSalary() { return grossSalary; }

    void calculateGrossSalary() {
        if (empSalary <= 5000) grossSalary = empSalary * 1.10;
        else if (empSalary <= 10000) grossSalary = empSalary * 1.15;
        else grossSalary = empSalary * 1.20;
    }

    void displayEmployeeDetails() const {  // ✅ const method
        cout << "\nID: " << empID << ", Name: " << empName
             << ", Salary: Rs." << empSalary
             << ", Gross: Rs." << grossSalary << endl;
    }
};

int Employee::nextID = 1001;

int main() {
    vector<Employee> employees;
    int choice, empID;
    string name;
    double salary;

    while (true) {
        cout << "\n=== PAYROLL SYSTEM ===\n";
        cout << "1. Add Employee\n2. Display All\n3. Calc Gross Salary\n";
        cout << "4. Update Employee\n5. Exit\nChoice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        }

        if (choice == 1) {
            cout << "Name: ";
            cin.ignore(); getline(cin, name);
            cout << "Salary: Rs.";
            cin >> salary;
            employees.emplace_back(name, salary);
            cout << "Added! ID: " << employees.back().getEmpID() << endl;
        }
        else if (choice == 2) {
            if (employees.empty()) {
                cout << "No employees!\n";
            } else {
                for (const auto& emp : employees) {  // ✅ const reference
                    emp.displayEmployeeDetails();
                }
            }
        }
        else if (choice == 3) {
            if (employees.empty()) {
                cout << "No employees!\n";
                continue;
            }
            cout << "Enter ID: ";
            cin >> empID;
            bool found = false;
            for (auto& emp : employees) {
                if (emp.getEmpID() == empID) {
                    emp.calculateGrossSalary();
                    cout << emp.getEmpName() << " Gross: Rs." << emp.getGrossSalary() << endl;
                    found = true;
                    break;  // ✅ NO return, just break
                }
            }
            if (!found) cout << "ID not found!\n";
        }
        else if (choice == 4) {
            if (employees.empty()) {
                cout << "No employees!\n";
                continue;
            }
            cout << "Enter ID: ";
            cin >> empID;
            for (auto& emp : employees) {
                if (emp.getEmpID() == empID) {
                    cout << "New name: ";
                    cin.ignore(); getline(cin, name);
                    emp.setEmpName(name);
                    cout << "New salary: ";
                    cin >> salary;
                    emp.setEmpSalary(salary);
                    cout << "Updated!\n";
                    break;
                }
            }
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
