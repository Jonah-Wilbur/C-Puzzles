#include <iostream>
#include <cmath>
using namespace std;

bool prime (long long int a){
  int sum = 0;
  for(long long int i = 2; i<=sqrt(a); i++){
    if(a%i==0){
      sum = sum+1;
    }
    }
  if(sum==0&&a!=4){return 1;}
  else{return 0;}
}
void product(long long int a){
  for(long long int i = 2; i<=a; i++){
    while(a%i==0){
      if(prime(i)==1){
    a=a/i;
    cout<<i<<endl;}
  }
    }
  }

int main() {
  long long int a;
  cin>>a;
  product(a);
}