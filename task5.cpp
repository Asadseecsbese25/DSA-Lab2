#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size);

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

void testSingleElement() {
    int arr[] = {10};

    bool result = isSorted(arr, 1);

    assert(result == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

void testAllSameValues() {
    int arr[] = {7, 7, 7, 7};

    bool result = isSorted(arr, 4);

    assert(result == true);
}

void testTwoUnsortedElements() {
    int arr[] = {10, 5};

    bool result = isSorted(arr, 2);

    assert(result == false);
}

int main() {

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();   
    testAllSameValues();
    testTwoUnsortedElements();

    cout << "All tests passed!" << endl;

    return 0;
}