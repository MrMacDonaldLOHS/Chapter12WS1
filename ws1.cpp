#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

// Your job is to fix the errors in each function
// build using make -f ws1.mak
// run under valgrind using
// valgrind --leak-check=full ws1
// You have a section fixed when valgrind says you have no errors.

// There are two errors in this first block
void PartB() {
    int *arrayPtr = new int[700];
    for (int i = 0; i <= 700; i++) {
        arrayPtr[i] = i;
    }
}

// Look in arrayExamples.cpp createCharPointer
// where we set sizeNeeded to figure out this  error
// There is only one actual error in here, but it causes
// valgrind to detect two issues.
void PartC() {
    int len = strlen("Hello");
    char *a = new char[len];
    strcpy(a, "Hello");
    cout << a << endl;
}


// This is a bit trickier. 
void PartD() {
    int *ptr1 = new int [10];
    int *ptr2 = new int [10];
    for (int i = 0; i < 10; i++) {
        ptr1[i] = i;
    }
    // These prints are here to help you. We do not want to change
    // where ptr2 is pointing, we want to change the contents of the array.
    cout << "ptr2 is pointing at: " << ptr2 << endl;
    // The person who wrote this wanted us to copy the
    // contents of the array in ptr1 into the array in ptr2.
    // They wanted two separate arrays each with the same values.
    // Fix it so that is what we have.
    ptr2 = ptr1;
    cout << "ptr2 is pointing at: " << ptr2 << endl;
    if (ptr2[3] == 3) {
        cout << "passed" << endl;
    }
    else {
        cout << "failed" << endl;
    }
    delete [] ptr1;
    //delete [] ptr2;
}
// In this case, we do want the two pointers to point to the same
// array. But, we still messed something up. line 66 is a problem. Why?
void PartE() {
    int *ptr1 = new int [10];
    int *ptr2 = ptr1;
    for (int i = 0; i < 10; i++) {
        ptr1[i] = i;
    }
    delete [] ptr1;
    ptr1 = nullptr;
    for (int i = 0; i < 10; i++) {
        cout << ptr2[i]  << endl;
    }
}

int main() {
    //PartB();  
    //PartC();  
    //PartD();  
    //PartE();  


}
