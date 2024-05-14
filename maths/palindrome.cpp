#include <iostream>
using namespace std;

int main(){
    int n,copy,rem,num;
    cout << "Enter the number (n): ";
    cin >> n;
    // Reversing digits
    copy = n;
    num = 0;
    while(copy>0){
        rem = copy%10;
        num = num*10+rem;
        copy = copy/10;
    }
    if(num == n){
        cout << "\nGiven number is a palindrome: " << n;
    }
    else{
        cout << "Given number is not a palindrome";
    }
    return 0;
}