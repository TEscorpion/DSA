#include <iostream>

using namespace std;

int main() {
  int A[10]={1,2,3,4,6,8,10};
  int x, i=6;

  // Display array
  for(int i=0; i<7; i++){
    cout << A[i] << " ";
  }
  cout << "\nEnter the number you wanna add: ";
  cin >> x;

  while(x < A[i]){
    A[i+1]=A[i];
    i--;
  }
  A[i+1]=x;

  cout << "Array after insertion:\n";
  for(int i=0; i<=7; i++){
    cout << A[i] << " ";
  }
  cout << endl;
  
}