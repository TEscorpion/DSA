#include <iostream>

using namespace std;

int main() {
  int A[5] = { 13,25,13,1,5 };
	int B[5];


	cout << "Array elements:\n";
	for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}

	// Transfer elements in A into B with reverse order
	for (int i = 4, j = 0; i >= 0; i--, j++) {
		B[j] = A[i];
	}

	// Assign B to A
	for (int i = 0, j = 0; i < 5; i++, j++) {
		A[i] = B[j];
	}

	cout << "\nArray Reversed: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}
  cout << endl;
}