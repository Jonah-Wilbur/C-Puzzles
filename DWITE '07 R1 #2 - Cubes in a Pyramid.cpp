#include <iostream>
#include <math.h>
using namespace std;
int main() {

double height , length , blocks;

cin >> length;

cin >> height;

blocks = pow(length , 2) * height / 3;


cout <<ceil(blocks) << endl;

}