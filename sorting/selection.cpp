#include <iostream>
using namespace std;

void printarray(int* a, int length);
void swapArrayElement(int* a, int position1, int position2);
void selection(int* a, int length);


int main (){
    // int arr[] = {13, 9, 15, 5, 45, 789, 98, 68};
    int arr[] = {5, 1 , 3 , 4 , 8, 7, 9, 0, 5, 2};
    int length = sizeof(arr)/sizeof(int);
    cout << "\nBefore sorting the array is: ";
    printarray(arr, length);
    selection(arr, length);
    cout << "\nAfter sorting the array is: ";
    printarray(arr, length);
    return 0;
}
/*The logic behind selection sort is to first start from a position
and find the minimum element from that position to last position in the 
array; 
Store the position and swap the start position and the minimum position
*/
void selection(int* a, int length){
    int min; //minimum value;
    int minPos; // minimum value position;
    for(int i = 0; i < length; i++){
        min = *(a + i);
        minPos = i;
        for(int j = i; j < length; j++){
            if(*(a+j)<min){
                min = *(a+j);
                minPos = j;
            }
        }
        swapArrayElement(a, i+1, minPos+1);
    }
    return;
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