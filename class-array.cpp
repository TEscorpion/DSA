#include <iostream>

using namespace std;

template <class T>

class Array{
private:
  T *A;
  int size;
  int length;
public:
  Array(){
    size=10;
    A = new T[10];
    length = 0;
  }

  Array(int sz){
    size = sz;
    A = new T[size];
    length = 0;
  }

  ~Array(){
    delete []A;
  }

  void Display();
  void Insert(int index, T x);
  T Delete(int index);
  int Search(T key);
  T Sum();
};

template <class T>
void Array<T>::Display(){
  for(int i=0; i<length; i++){
    cout << A[i] << " ";
  }
  cout << "\n";
}

template <class T>
void Array<T>::Insert(int index, T x){
  if(index >=0 && index <= length){    
  for(int i=length-1; i>=index; i--){
    A[i+1] = A[i];
  }
  A[index] = x;
  length++;
  }else{
    cout << "Wrong index, Please try again\n";
  }
}

template <class T>
T Array<T>::Delete(int index){
  T x;
  if(index >=0 && index < length){
    x = A[index];
    for(int i=index; i<length-1; i++){
      A[i] = A[i+1];
    }
    length--;
  }else{
    cout << "Wrong index, Please try again\n";
    return -1;
  }
  return x;
}

template <class T>
T Array<T>::Sum(){
  T total=0;
  for(int i=0; i<length; i++){
    total+=A[i];
  }
  return total;
}

template <class T>
int Array<T>::Search(T key){
  int l=0, h=length-1, mid;

  while(l<=h){
    mid= (l+h)/2;
    if(A[mid]==key){
      return 1;
    } else if(key < A[mid]){
      h = mid-1;
    } else {
      l = mid+1;
    }
  }
  return -1;
}

int main() {
  Array<int> arr(10);
  arr.Insert(0,5);
  arr.Insert(1,6);
  arr.Insert(2,3);
  arr.Insert(3,9);
  arr.Insert(4,8);

  arr.Display();

  cout << arr.Delete(0) << endl;
  arr.Display();
}