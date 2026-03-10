#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal){
    minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;

    maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
}

int main(){
    int x, y, z;
    int min, max;

    cout << "Enter 3 numbers:" << endl;
    cin >> x >> y >> z;

    cout << "3 numbers are: " << x << " "
         << y << " " << z << endl;

    findMinMax(x, y, z, min, max);

    cout << "After function call" << endl;
    cout << "Minimum Value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
