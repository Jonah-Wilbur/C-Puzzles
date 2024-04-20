#include <iostream>
using namespace std;
void printindex(int array[], int length){
  for(int i = 0; i<length; i++){
    if(array[i]==1){cout<<i+1<<endl;}
  }
}
void removal(int array[], int length, int multiple){
  int counter = 0;
  for(int i = 0; i<length; i++){
    if(array[i]==1){
      counter++;
    if(counter==multiple) {
      array[i]=0;
      counter = 0;
      }
    }
  }
}
int main() {
  int K;
  cin>>K;
  int array[K];
  for(int i=0; i<K; i++){
    array[i]=1;
  }
  int m;
  cin>>m;
  for(int i = 0; i<m; i++){
    int multiple;
    cin>>multiple;
    removal(array, K, multiple);
  }
  printindex(array, K);
}