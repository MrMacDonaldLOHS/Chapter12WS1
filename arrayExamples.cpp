#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

char *createCharPointer(const char otherstring[]);


int main() {
    // Most basic access - create, use, delete
    int *ptr = new int[500];
    for (int i = 0; i < 500; i++) {
        ptr[i] = i;
    }
    cout << "ptr[20] = " << ptr[20] << endl;
    delete [] ptr;

    // More interesting access - someone else creates
    // we delete
    char *word1 = createCharPointer("Hello ");
    char *word2 = createCharPointer("World!");
    cout << word1 << word2 << endl;
    delete [] word1;
    delete [] word2;


    return 0;
}

//
// Allocate enough memory to perfectly hold the string
//
char *createCharPointer(const char otherString[]) {
    char *ptr = nullptr;
    // We add 1 because of the \0 at the end of the string
    int sizeNeeded = strlen(otherString) + 1;
    
    ptr = new char[sizeNeeded];
    // After we allocate it, we can treat like a regular array.
    strcpy(ptr, otherString);
    return ptr;
}
