#include <iostream>
using namespace std;
void SwapNumbers(int &a, int &b);


int main(){
int varA = 25;
int varB = 100;

cout << "varA before swapping: " << varA << endl;
cout << "varB before swapping: " <<varB << endl;

SwapNumbers(varA, varB);

cout << "varA after swap: " << varA << endl;
cout << "varB after swap: " << varB << endl;

return 0;
}
void SwapNumbers(int &a, int &b){
int c = a;
a = b;
b = c;
}

