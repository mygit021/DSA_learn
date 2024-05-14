#include <iostream>
using namespace std;

void printn_back(int n){
    if(n==1){
        cout << n << endl;
    }
    else{
        cout << n << endl;
        printn_back(n-1);
    }
}
void printn_front(int n){
    if(n==1){
        cout << n << endl;
    }
    else{
        printn_front(n-1);
        cout << n << endl;
    }
}

int main(){
    int n;
    cout << "Enter number to count: ";
    cin >> n;

    printn_back(n);
    cout << endl;
    printn_front(n);
    return 0;
}