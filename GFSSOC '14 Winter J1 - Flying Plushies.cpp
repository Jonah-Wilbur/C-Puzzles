#include <iostream>
using namespace std;
int main() {
  int N, M, i, accumulator;
  cin>>N;
  cin>>M;
  int H;
  i=0;
  accumulator = 0;
  while (i<M){
    cin>>H;
 i = i+1;
  if (H>=N)
    accumulator=accumulator+1;
  else
  accumulator=accumulator;
    }
cout<<accumulator<<endl;
  }