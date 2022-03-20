#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void PartA() {
    int x = 1;
    int y = 2;
    int *xp = &x;
    int *yp = &y;
    cout << "xp " << xp << " xp value " << (*xp) << " x value " << x << endl;
    cout << "yp " << xp << " yp value " << (*yp) << " y value " << y << endl;
    xp = yp; // Fix this line
    y = 7;
    // Predict what will be printed by the (*xp) componet of the code below
    cout << "xp " << xp << " xp value " << (*xp) << " x value " << x << endl; 
    cout << "yp " << xp << " yp value " << (*yp) << " y value " << y << endl;
}

void PartB() {
    char a[100] = "Hello";
    char b[100] = "World!";
    char *ap = a;
    char *bp = b;
    // Predict what will be printed by the line below
    cout << ap << " " << bp << endl;

    // Add the code here
}

void PartC() {
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    // Here is how you generate a random number between 0 and 1000
    // You will do this in a loop to initialize your array.
    int num = rand() % 1000;
    cout << num << endl;
}

void PartD() {
}
int main() {
    srand(time(nullptr)); 
    //PartA();
    //PartB();  
    //PartC();  
    //PartD();  


}
