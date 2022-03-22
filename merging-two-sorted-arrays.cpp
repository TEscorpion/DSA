#include <iostream>

using namespace std;

int main() {
  int A[5] = {3,8,16,20,25};
  int B[5] = {4,10,12,22,23};
  int C[10];
  int i=0,j=0,k=0;

  // Display A
  cout << "Array A:\n";
  for(int z=0; z<5; z++){
    cout << A[z] << " ";
  }
  // Display B
  cout << "\nArray B:\n";
  for(int z=0; z<5; z++){
    cout << B[z] << " ";
  }
  
  while(i<5 && j<5){
    if(A[i]<B[j]){
      C[k++] = A[i++];
    } else {
      C[k++] = B[j++];
    }
  }

  for(;i<5;i++){
    C[k++]=A[i];
  }

  for(;j<5;j++){
    C[k++]=B[j];
  }

  // Display C
  cout << "\nArray C:\n";
  for(int z=0; z<10; z++){
    cout << C[z] << " ";
  }
  cout << endl;
  
}