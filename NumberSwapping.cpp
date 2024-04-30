#include <iostream>
using namespace std;

void SwapNumbers(int *a, int *b);

int main(){
    int varA;
int varB;

    cout << "Enter varA; ";
    cin >> varA;
    cout << "Enter varB: ";
    cin >> varB;
cout << "varA before swapping: " <<varA << endl;
cout << "varB before swapping: " <<varB << endl;

SwapNumbers(&varA, &varB);
cout << "varA after swapping: " << varA << endl;
cout << "varB after swapping: " << varB << endl;

return 0;
}
void SwapNumbers(int *a, int *b){
int c = *a;
*a = *b;
*b = c;
}
