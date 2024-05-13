#include <iostream>
using namespace std;

int main(){
    int number, multiple;
    cout << "Enter number you want: ";
    cin >> number;
    cout << "Enter times you want: ";
    cin >> multiple;
    cout << endl;
    for (int i = 1; i <= multiple; i++){
        cout << number << " * " << i << " = " << number*i << ";" << endl;
    }
    cout << "Loop is over";
    return 0;
}
