#include <bits/stdc++.h>
using namespace std;

void printarray(int* a, int length);
void swapArrayElement(int* a, int position1, int position2);
void insertion(int* a, int length);


int main (){
    // int arr[] = {13, 9, 15, 5, 45, 789, 98, 68};
    time_t start, end;
    time(&start);
    int arr[] = {5,5, 40,4454,4,
    65,45,4,56,456,446,54,54,49,87,98,7,4,5612,31,84,5,13,1,1,6549,879,4,4656,5,49,821,9887,12,36,79,845,615,64,9,8,7 ,1 , 3 , 4 , 8, 7, 9, 0, 5, 2};
    int length = sizeof(arr)/sizeof(int);
    cout << "\nBefore sorting the array is: ";
    printarray(arr, length);
    insertion(arr, length);
    cout << "\nAfter sorting the array is: ";
    printarray(arr, length);

    time(&end);
    double time_taken = double(end - start); 
    cout << "\nTime taken by program is : " << fixed << time_taken << setprecision(10); 
    cout << " sec " << endl;
    return 0;
}

void insertion(int* a, int length){
    for(int i = 0; i < length; i++){
        for(int j = i; j > 0; j--){
            if(*(a+j) < *(a+j-1)){
                swapArrayElement(a , j+1 , j);
            }
        }
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