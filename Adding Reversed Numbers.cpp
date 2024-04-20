#include <iostream>
#include <cmath>
using namespace std;
int digits(int a){
  int power, variable;
  variable = a;
  for(int i = 0; a>0; i++){
    a = variable;
    a = a/pow(10, i);
    power = i;
  }

  return power;
}
int reverse(int a, int b);
int main() {
  int a;
  cin>>a;

  for(int i = 0; i<a; i++){
    int a, b;
    cin>>a>>b;
    int sum = reverse(a, digits(a))/10+reverse(b, digits(b))/10;
    cout<<reverse(sum, digits(sum))/10<<endl;
  }
}
int reverse(int a, int b){
  if(b==0){return a*pow(10, digits(a));
    }
  else{return reverse(a/10, b-1)+(a%10*pow(10, b));
    }
}