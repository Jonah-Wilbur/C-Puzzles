#include <iostream>
using namespace std;

int main() { 
int n , d , q , l , t ;
//cout << "how many nickels did bob receive"<< endl;
cin >> n;
//cout << "how many dimes did bob receive"<< endl;
cin >> d;
//cout << "how many quarters did bob receive"<< endl;
cin >> q;
//cout << "how many loonies did bob receive"<< endl;
cin >> l;
//cout << "how many toonies did bob receive"<< endl;
cin >> t;
int sum;
sum = (n * 5) + (d * 10) + (q * 25) + (l * 100) + (t * 200);
cout << sum << endl;

}