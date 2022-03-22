#include <iostream>

using namespace std;

int main() {
    int A[10] = { -1,2,3,-2,4,5,-6,7 };
    int i = 0, j = 7;

    // Display array
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    while (i < j) {
        while (A[i] < 0) { i++; }
        while (A[j] >= 0) { j--; }
        if (i < j) {
            int temp;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    cout << "After Arrengment:\n";
    for (int i = 0; i < 8; i++) {
        cout << A[i] << " ";
    }
    cout << endl;  
}