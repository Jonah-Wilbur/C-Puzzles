#include <iostream>
using namespace std;
int a, b, a1, a2, a3, a4, b1, b2, b3, b4;
int main() {


  cin>>a;
  cin>>b;
a3 = a%10;
a2 = (a/10)%10;
a1 = (a/100) % 10;
a4 = (a3 * 100) + (a2 * 10) + (a1);
b3 = b%10;
b2 = (b/10)%10;
b1 = (b/100) % 10;
b4 = (b3 * 100) + (b2 * 10) + (b1);
if (a4 > b4){
  cout<<a4<<endl;
}
else {
  cout<<b4<<endl;
}
}