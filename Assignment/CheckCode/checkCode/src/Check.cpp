#include <iostream>
using namespace std;

void doubleIt(int &n) {
    n = n * 2;
    cout << "Inside doubleIt: " << n << endl;
}

int main() {
    int num = 7;
    cout << "Before: " << num << endl;

    doubleIt(num);
    cout << "In main after call: " << num << endl;

    return 0;
}


/*
 * -----------this is code which has given to check output
 #include <stdio.h>
void doubleIt(int n) {
 n = n * 2;
 printf("Inside doubleIt: %d\n", n);
}
int main() {
 int num = 7;
 doubleIt(num);
 printf("In main after call: %d\n", num);
 return 0;
}
---------------output came like this we need to fix this using call by reference
which we did in above code
Inside doubleIt: 14
In main after call: 7


 */





