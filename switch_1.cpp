#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter day:" << day;
    cin >> day;
    switch (day)
    {
    case 0:
        cout << "Yay you are starting at day " << day;
        break;
    case 1:
        cout << "You continued  at day " << day;
        break;
    case 2:
        cout << "Good you are consistent at day " << day;
        break;
    case 3:
        cout <<"Great work keep going at day " << day;
        break;
    default:
        cout << "Invalid Input : " << day;
        break;
    }
    return 0;
}