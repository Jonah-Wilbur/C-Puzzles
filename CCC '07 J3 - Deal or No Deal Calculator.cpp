#include <iostream>
using namespace std;
bool deal_or_no_deal(int array[], int length, int offer){
  int sum = 0;
  for(int i = 0; i<10;  i++){
    sum=sum+array[i];
  }
  int average = sum/length;
  if(average<offer){return 1;}
  else{return 0;}
}
void printmarks(int marks[]){
  for(int i = 0; i<10; i++){
    std::cout<<marks[i]<<std::endl;
  }
}

int main() {
  int a;
  int cases[10]{100, 500, 1000, 5000, 10000, 25000, 50000, 100000, 500000, 1000000};
  cin>>a;
  int length = 10-a;
  for(int i = 0; i<a; i++){
    int k;
    cin>>k;
    cases[k-1]=0;
  }

  int offer;
  cin>>offer;
  if(deal_or_no_deal(cases, length, offer)==1){cout<<"deal"<<endl;}
  else{cout<<"no deal"<<endl;}
}