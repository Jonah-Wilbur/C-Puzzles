#include <iostream>
using namespace std;
int main() {
  long long int N, i, num, lowest;
  i=0;
  lowest = 100000000000;
  cin>>N;
  while(i<N){
    cin>>num;
    i=i+1;
    if (num<lowest||num==lowest)
      lowest=num;
    else
      num=num;
    }
    cout<<lowest<<endl;
}