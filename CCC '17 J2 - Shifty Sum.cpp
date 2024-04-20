#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int k, N, sum, product;
  sum = 0;
  product = 0;

  cin>>N;

  cin>>k;
for(int i = 0; i<=k; i++){
 product = N * pow(10, i) ;
sum = sum+product;
  }
  cout<<sum;
}
