#include <iostream>

using namespace std;

int main(){
    int input;
    cout << "Enter N: ";
    cin >> input;
    cout << "pattern1" << endl;
    for(int i = 0; i < input; i++){
        for(int j = 0; j<input; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pattern2" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pattern3" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << "pattern4" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = 1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
    cout << "pattern5" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = input; j > i-1; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pattern6" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = input; j > i-1; j--){
            cout << input+1-j;
        }
        cout << endl;
    }
    cout << "pattern7" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = input-i; j > 0; j--){
            cout << " ";
        }
        for(int j = 1; j < 2*i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << "pattern8" << endl;
    for(int i = 1; i <= input; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = 2*(input-i) + 1 ; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
