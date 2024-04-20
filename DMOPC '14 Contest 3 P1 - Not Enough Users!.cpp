#include <iostream>
using namespace std;
int main() {
  int N, K, D, i, accumulator;
  cin>>N;
  cin>>K;
  cin>>D;
  i=0;
  accumulator = N;
  while(i<D){
   accumulator = accumulator*K;
    i=i+1;
  }
  cout<<accumulator<<endl;
}