#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int* arrayOfNumbers = new int(10);
    for (int i = 0; i < 20; i++) {
        arrayOfNumbers[i] = i;
    }

    for (int i = 0; i < 20; i++) {
        cout << arrayOfNumbers[i] << endl;
    }

    return 0;
}
