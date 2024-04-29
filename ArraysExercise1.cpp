#include <iostream>
#include <string>
using namespace std;

int main(){
int lab = 0;
int * surity = nullptr;
string * name = nullptr;
cout << "Enter the number of names: ";
cin >> lab;
surity = new int[lab];
name = new string[lab];

for(int k = 0; k < lab; k++){
    cout << "Enter name " <<k+1 <<":";
    cin >> name[k];
}
cout << "You have entered: ";
for(int n = 0; n < lab; n++){
    cout << name[n] << ", ";
    //cout <<" " <<endl;
    cout << endl;
}

delete [] name;

cout << "enter the size of int array: ";
cin >> lab;


for(int i = 0; i < lab; i++){
    cout << "Enter number " <<i+1 <<":";
    cin >> surity[i];
}
cout << "You have entered: ";
for(int j = 0; j < lab; j++){
    cout << surity[j] << ", ";
}
delete[] surity;
return 0;
}
