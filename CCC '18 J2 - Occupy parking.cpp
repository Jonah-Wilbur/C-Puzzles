#include <iostream>
using namespace std;
int check(char a) {
  char c;
  c = 'C';
  if(a==c)
    return 1;
  else
    return 0;
}
int parking(int day1[], int day2[], int length){
  int counter = 0;
  for(int i = 0; i<length; i++){
    if(day1[i]==1&&day2[i]==1){counter++;}
  }
  return counter;
}

int main() {
  int n;
  cin>>n;
  int day1[n];
  int day2[n];
  for(int i = 0; i<n; i++){
    char boolean;
    cin>>boolean;
    day1[i]=check(boolean);
  }
  for(int i = 0; i<n; i++){
    char boolean;
    cin>>boolean;
    day2[i]=check(boolean);
  }
  cout<<parking(day1, day2, n);
}
