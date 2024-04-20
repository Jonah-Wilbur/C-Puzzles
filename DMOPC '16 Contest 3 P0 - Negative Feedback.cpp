#include <iostream>
using namespace std;
double Vo, Vi, Rf, Rg;
int main() {
 cin>>Vi>>Rf>>Rg;
Vo = Vi * (1 + (Rf/Rg));
cout<<Vo<<endl;
}