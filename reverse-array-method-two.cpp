// Reverse an array method two: switch elements

#include <iostream>

using namespace std;

int main() {
  int A[5] = { 13,25,14,1,5 };
  int i=0, j=4;

  cout << "Array elements:\n";
	for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}

  while(i<j){
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;

    i++;
    j--;
  }

  cout <<"\nArray Reversed: \n";
  for (int i = 0; i < 5; i++) {
		cout << A[i] << " ";
	}
  cout << endl;
}