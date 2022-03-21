#include <iostream>
using namespace std;

// Shows the syntax for declaring a pointer.
// Getting the address of an object using the & operator.
// And demonstrates dereferencing.
void example1() {
    int a = 1;
    int *ptrA = nullptr; // Declare a pointer. set it to null
    ptrA = &a; // Get the address of a and store it in ptrA
    cout << a << endl;
    *ptrA = 2; // Dereference *ptrA, which will change a's value
    cout << a << endl;
}

// Shows the syntax for declaring a pointer (again).
// Setting that pointer equal to an array address.
// Using that pointer to access the array.
void example2() {
    int x[50];
    int *ptrX = nullptr;
    ptrX = x; // Notice how we do not use & when getting an array address.
    for (int index = 0; index < 50; index++) {
        ptrX[index] = index; // We access a pointer to an array just like an array.
    }
}
// Shows the syntax for using a pointer as a parameter.
void example3_1(double *ptr) {
    *ptr = 9.3; // Change whater ptr points to
}
// Shows the syntax for passing an address to a function.
void example3() {
    double x = 22;
    example3_1(&x);
    cout << x << endl;
}

int main() {
    example1();
    example2();
    example3();
    
}
