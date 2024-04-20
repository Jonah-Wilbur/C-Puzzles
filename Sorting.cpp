#include <iostream>
using namespace std;
void printarray(int array[], int length){
  for(int i = 0; i<length; i++){
    std::cout<<array[i]<<std::endl;
  }
}
void selectionsort(int array[], int length){
  for(int k = 0; k<length; k++){
    int smallest = array[k];
    int index = k;
    for(int i = k; i<length; i++){
      if(smallest>array[i]){smallest=array[i];
        index = i;}
    }
    int temp = array[k];
    array[k]=smallest;
    array[index] = temp;
  }
}
int main() {
 int a;
  cin>>a;
  int array[a];
  for(int i=1; i<=a; i++){
    cin>>array[i-1];
  }
  selectionsort(array, a);
  printarray(array, a);
}