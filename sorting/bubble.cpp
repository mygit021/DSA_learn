#include <iostream>
using namespace std;

void printarray(int* a, int length);
void swapArrayElement(int* a, int position1, int position2);
void bubble(int* a, int length);


int main (){
//    int arr[] = {13, 9, 15, 5, 45, 789, 98, 68};
    int arr[] = {5, 1 , 3 , 4 , 8, 7, 9, 0, 5, 2};
    int length = sizeof(arr)/sizeof(int);
    cout << "\nBefore sorting the array is: ";
    printarray(arr, length);
    bubble(arr, length);
    cout << "\nAfter sorting the array is: ";
    printarray(arr, length);
    return 0;
}

void bubble(int* a, int length){
    for(int i = length-1; i >=0 ; i--){
        for(int j = 0; j < i; j++){
            if(*(a+j) > *(a+j+1)){
                swapArrayElement(a , j+1 , j+2);
                // cout << "\ninner loop: ";
                // printarray(a, length);
            }
        }
        // printarray(a, length);
    }

}

void swapArrayElement(int* a, int position1, int position2)
//Here position1 and position 2 are not zero indexed;
{
    int holder = *(a+position1-1);
    *(a+position1-1) = *(a+position2-1);
    *(a+position2-1) = holder;
    return;
}

void printarray(int* a, int length){
    cout << "\n";
    for(int i = 0; i < length; i++){
        cout << *(a+i) << " ";
    }
    return;
}