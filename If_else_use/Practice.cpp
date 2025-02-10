#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using while loop
    int i = 1;
    cout << "Using while loop: ";
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Using for loop
    cout << "Using for loop: ";
    for (int j = 1; j <= n; j++) {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}

