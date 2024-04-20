#include <iostream>
using namespace std;
int main() {
  int L, A, B, F;
  int N, i;
  i=0;
  cin>>N;
  while(i<N){
i=i+1;
    cin>>L>>A>>B>>F;
if(L-A>=F&&L-B<=F)
  cout<<"Yes"<<endl;
else
  cout<<"No"<<endl;
    }
}