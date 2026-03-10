#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalCars;
    double totalRevenue;

public:
    TollBooth() {
        totalCars = 0;
        totalRevenue = 0.0;
    }

    void payCar() {
        totalCars++;
        totalRevenue += 180.0;
        cout << "Standard car passed. Toll: Rs. 180. Total cars: " << totalCars << endl;
    }

    void payTruck() {
        totalCars++;
        totalRevenue += 300.0;
        cout << "Truck passed. Toll: Rs. 300. Total cars: " << totalCars << endl;
    }

    void payBus() {
        totalCars++;
        totalRevenue += 350.0;
        cout << "Bus passed. Toll: Rs. 350. Total cars: " << totalCars << endl;
    }

    void displayTotalCars() {
        cout << "Total vehicles passed: " << totalCars << endl;
    }

    void displayTotalRevenue() {
        cout << "Total revenue collected: Rs. " << totalRevenue << endl;
    }

    void resetStatistics() {
        totalCars = 0;
        totalRevenue = 0.0;
        cout << "Statistics reset successfully!" << endl;
    }

    // ✅ Final display method - shows BOTH stats
    void displayFinalStats() const {
        cout << "Final Stats - Total vehicles: " << totalCars
             << ", Total Revenue: Rs. " << totalRevenue << endl;
    }
};

int main() {
    TollBooth booth;
    int choice;

    while (true) {
        cout << "\n=== TOLL BOOTH MANAGEMENT ===\n";
        cout << "1. Add Standard Car (Rs. 180)\n";
        cout << "2. Add Truck (Rs. 300)\n";
        cout << "3. Add Bus (Rs. 350)\n";
        cout << "4. Display Total Cars\n";
        cout << "5. Display Total Revenue\n";
        cout << "6. Reset Statistics\n";
        cout << "7. Exit\n";
        cout << "Enter choice (1-7): ";
        cin >> choice;

        if (choice == 1) booth.payCar();
        else if (choice == 2) booth.payTruck();
        else if (choice == 3) booth.payBus();
        else if (choice == 4) booth.displayTotalCars();
        else if (choice == 5) booth.displayTotalRevenue();
        else if (choice == 6) booth.resetStatistics();
        else if (choice == 7) {
            cout << "\nThank you for using Toll Booth System!\n";
            booth.displayFinalStats();  // ✅ Uses class method only
            break;
        }
        else {
            cout << "Invalid choice! Please enter 1-7.\n";
        }
    }
    return 0;
}
