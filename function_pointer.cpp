#include <iostream>
using namespace std;

void update(int **ptr) {
    // This would try to move the pointer to pointer (no effect on original)
    // ptr = ptr + 1; 

    // This moves the pointer stored in *ptr (changes what it points to)
    // *ptr = *ptr + 1; 

    // This actually changes the value at the final target
    **ptr = **ptr + 1;  
}

int main() {
    int num = 5;
    int *firstPtr = &num;
    int **secondPtr = &firstPtr;

    cout << "=== Before update() ===" << endl;
    cout << "num: " << num << endl;
    cout << "firstPtr: " << firstPtr << endl;
    cout << "secondPtr: " << secondPtr << endl;

    update(secondPtr); // Passing address of pointer

    cout << "\n=== After update() ===" << endl;
    cout << "num: " << num << endl;
    cout << "firstPtr: " << firstPtr << endl;
    cout << "secondPtr: " << secondPtr << endl;

    return 0;
}
