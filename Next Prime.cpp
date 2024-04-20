#include <iostream>
#include <cmath>
using namespace std;
bool prime (long long int a){
  long long int sum = 0;
  for(long long int i = 2; i<=sqrt(a); i++){
    if(a%i==0){
      sum = sum+1;
    }
    }
  if(sum==0&&a!=4){return 1;}
  else{return 0;}
}


int main() {
  long long int a;
  cin>>a;
  long long int check=0;
  for(long long int i = a; check==0; i++){
    if(prime(i)==1&&i!=1){
      cout<<i;
      check=1;}
  }
}