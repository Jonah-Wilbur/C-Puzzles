#include <iostream>
using namespace std;
int sumac(int, int);
int main() {
  int a, b;
  cin>>a>>b;
  cout<<sumac(a, b);
}
int sumac(int a, int b){
  if(b<0){return 1;}
  else{return 1+sumac(b, a-b);}
}