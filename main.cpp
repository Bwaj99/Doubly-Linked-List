#include <iostream>
#include "IntList.h"
using namespace std;

int main() {
    IntList list;

    // test values
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);

    // print the list 
    cout << list << endl;

    // print the list in reverse order
    list.printReverse();
    cout << endl;

    // remove some values from the front and back
    list.pop_front();
    list.pop_back();

    // print the list 
    cout << list << endl;

    return 0;
}