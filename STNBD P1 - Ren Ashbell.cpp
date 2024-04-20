#include <iostream>
using namespace std;
int main() {
  int N, i, Ren;
  i=0;
  cin>>N;
  int a, sum;
  sum = 0;
  cin>>Ren;
  while(i<N-1){
    cin>>a;
    i=i+1;
    if (a>Ren||Ren==a)
      sum=1;
    else
      sum=sum;
    }
  if(sum>0)
    cout<<"NO"<<endl;
  else{
    cout<<"YES"<<endl;}
}