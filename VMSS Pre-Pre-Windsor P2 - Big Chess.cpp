#include <iostream>
using namespace std;
int main() {
  int W, H;
  cin>>W>>H;
  int i;
  i=0;
  while(i<H){
    i++;
    cout<<endl;
    int x = 0;
  while(x<W){
    x++;
    if(i%2==1)
      if(x%2==0)
        cout<<"1";
      else
        cout<<"0";
    else
      if(x%2==0)
        cout<<"0";
      else
        cout<<"1";
  }    
    }
    }