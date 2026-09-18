#include <iostream>
using namespace std;

// Function to analyze the pointer
void analyze_pointer(int *ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {

    // Part 2: Integer allocated on the stack
    int iValue = 50;

    cout << "Stack Integer:" << endl;
    analyze_pointer(&iValue);

    // Part 2: Integer allocated on the heap
    int *heapValue = new int;
    *heapValue = 100;

    cout << "\nHeap Integer:" << endl;
    analyze_pointer(heapValue);

    // Free the heap memory
    delete heapValue;

    return 0;
}