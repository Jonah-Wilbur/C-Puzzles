#include <iostream>
using namespace std;
int main() {

int burger, side, drink, desert, total;
total = 0;

  cin>>burger;

  cin>>side;

  cin>>drink;

  cin>>desert;
switch(burger){
  case 1 : 
  total = total + 461;
  break;
  case 2 : 
  total = total + 431;
  break;
  case 3 : 
  total = total + 420; 
  break;
  case 4 : 
  total = total + 0;
  break;
    }
  switch(side){
  case 1 : 
  total = total + 100;
  break;
  case 2 : 
  total = total + 57;
  break;
  case 3 : 
  total = total + 70; 
  break;
  case 4 : 
  total = total + 0;
  break;
    }
  switch(drink){
  case 1 : 
  total = total + 130;
  break;
  case 2 : 
  total = total + 160;
  break;
  case 3 : 
  total = total + 118; 
  break;
  case 4 : 
  total = total + 0;
  break;
    }
  switch(desert){
  case 1 : 
  total = total + 167;
  break;
  case 2 : 
  total = total + 266;
  break;
  case 3 : 
  total = total + 75; 
  break;
  case 4 : 
  total = total + 0;
  break;
    }
  cout<<"Your total Calorie count is "<<total<<"."<<endl;
}