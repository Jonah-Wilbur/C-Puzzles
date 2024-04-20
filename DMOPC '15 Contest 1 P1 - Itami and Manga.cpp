#include <iostream>
using namespace std;
int main() {
  int i, N;
  cin>>N;
  i=0;
  string  S, Best;
  float rating, highest;
  highest = 0;
  while(i<N){
 cin>>S>>rating;
  i=i+1;
  if(rating>highest){
    highest=rating;
    Best = S;}
  else{
    Best = Best;
  highest=highest;}
    }
  cout<<Best<<endl;
}
