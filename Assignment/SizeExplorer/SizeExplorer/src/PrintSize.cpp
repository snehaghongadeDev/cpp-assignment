#include <iostream>
using namespace std;

int main() {
    cout << "Size of short int:       " << sizeof(short int)       << " bytes" << endl;
    cout << "Size of int:             " << sizeof(int)             << " bytes" << endl;
    cout << "Size of long int:        " << sizeof(long int)        << " bytes" << endl;
    cout << "Size of long long int:   " << sizeof(long long int)   << " bytes" << endl;
    cout << "Size of unsigned int:    " << sizeof(unsigned int)    << " bytes" << endl;
    cout << "Size of float:           " << sizeof(float)           << " bytes" << endl;
    cout << "Size of double:          " << sizeof(double)          << " bytes" << endl;
    cout << "Size of long double:     " << sizeof(long double)     << " bytes" << endl;
    cout << "Size of char:            " << sizeof(char)            << " bytes" << endl;

    /*
     * On most typical 64bit machines (like mine when I run this):
     *   - int and long int usually have the same size (4 bytes).
     *   - unsigned int has the SAME size as int (4 bytes).
     * So:
     *   - int and long int are the two types that have the same size.
     *   - unsigned int does NOT have a different size than int;
     *     they only differ in how the bits are interpreted (signed vs unsigned).
     */

    return 0;
}





