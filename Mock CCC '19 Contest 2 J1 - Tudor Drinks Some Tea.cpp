#include <iostream>

int check(char a) {
  char p;
  p = 'P';
  if(a==p)
    return 1;
  else
    return 0;
}
int main() {
 using namespace std;
  char a;
  int i=0;
  int counter = 0;
  int addition;
  while(i<5){
    i++;


    cin>>a;

    addition = check (a);
    counter = counter + addition;
    }

  cout<<counter<<endl;
}
