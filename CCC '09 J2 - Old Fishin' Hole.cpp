#include <iostream>
using namespace std;
int main() {
  int trout, pike, pickerel, total, sum, accumulator;
  accumulator = 0;
  sum = 0;
  cin>>trout>>pike>>pickerel>>total;
  for(int t = 0; t<=total; t++){
  for(int pk = 0; pk<=total; pk++){
for(int pc = 0; pc<=total; pc++){
sum = (t*trout) + (pk * pike) + (pc * pickerel);
  if(sum<=total&&sum>0){accumulator = accumulator+1;
    cout<<t<<" Brown Trout, "<<pk<<" Northern Pike, "<<pc<<" Yellow Pickerel"<<endl;}

      }
    }  
  }
  cout<<"Number of ways to catch fish: "<<accumulator;
}
