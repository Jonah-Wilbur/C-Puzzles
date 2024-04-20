#include <iostream>
#include <cmath>
using namespace std;
bool prime (int a){
  int sum = 0;
  for(int i = 2; i<=sqrt(a); i++){
    if(a%i==0){
      sum = sum+1;
    }
    }
  if(sum==0&&a!=4&&a>1){return 1;}
  else{return 0;}
}

int main() {
  int m;
  cin>>m;
  int i = 0;
  int e = 0;
 while(e<m){
   if(prime(i)==1){
     cout<<i<<"  ";
     i++;
     e++;}
    else{
      i++;

    }
   if(e%10==0)
     cout<<endl;
   }
 }