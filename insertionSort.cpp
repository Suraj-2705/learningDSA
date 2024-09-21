#include<iostream>
using namespace std;
void insertionSort(int n, int arr[]){

    for(int i = 1; i < n; i++){
        int temp = arr[i]; 
        int j = i - 1;
        for(j = i - 1; j >=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {10, 4, 8, 6, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(n, arr);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}