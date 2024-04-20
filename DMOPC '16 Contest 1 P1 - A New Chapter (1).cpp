#include <iostream>
using namespace std;
int counter(int array[], int length){
  int counter = 0;
  for(int i = 0; i<length; i++){
    if(array[i]%2==i%2){counter++;}
  }
  return counter;
}
int main() {
  int length;
  cin>>length;
  int array[length];
  for(int i = 0; i<length; i++){
    int k;
    cin>>k;
    array[i]=k;
  }
  cout<<counter(array, length);
}
