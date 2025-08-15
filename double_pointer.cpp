#include <iostream>
using namespace std;

int main() {

    int value = 5;

    // First-level pointer (points to 'value')
    int *firstPtr = &value;

    // Second-level pointer (points to 'firstPtr')
    int **secondPtr = &firstPtr;

    cout << "=== Let's Look at the Values ===" << endl;
    cout << "value: " << value << endl;
    cout << "*firstPtr (value via 1 pointer): " << *firstPtr << endl;
    cout << "**secondPtr (value via 2 pointers): " << **secondPtr << endl;

    cout << "\n=== Now Let's Look at the Addresses ===" << endl;
    cout << "Address stored in firstPtr: " << firstPtr << endl;
    cout << "Address of value (&value): " << &value << endl;
    cout << "---------------------------------" << endl;
    cout << "Address stored in secondPtr: " << secondPtr << endl;
    cout << "Address of firstPtr (&firstPtr): " << &firstPtr << endl;

    cout << "\n=== Different Ways to Access the Same Value ===" << endl;
    cout << "Direct access: " << value << endl;
    cout << "Via firstPtr: " << *firstPtr << endl;
    cout << "Via secondPtr: " << **secondPtr << endl;

    return 0;
}
