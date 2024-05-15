#include <iostream>
using namespace std;

bool palindrome(string A, int i){
    if(i>=A.length()/2) return true;
    if(A[i]!=A[A.length()-i-1]) return false;
    return palindrome(A, i+1);
}

int main(){
    
    string input;
    cout << "Enter the word: ";
    cin >> input;
    int length = input.length();
    if(palindrome(input, 0)){
        cout << input <<" is a palindrome";
    }
    else{
        cout << input << " is not a palindrome";
    }
}