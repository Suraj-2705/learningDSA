#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[], int size){
    for(int i = 0; i< size; i+=2){
        swap(arr[i], arr[i+1]);
    }

    cout<<endl;
}
int main()
{
    int even[6] = {1, 2, 3, 45, 60, 7};
    int odd[5] = {4, 5, 6, 8, 2};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);

    printArray(even, 6);
     cout<<endl;
    printArray(odd, 5);

}