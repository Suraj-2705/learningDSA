#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        if(key > arr[mid]){
            s = mid + 1;
        }else if(key < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
return ans;
}
int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        if(key > arr[mid]){
            s = mid + 1;
        }else if(key < arr[mid]){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
return ans;

}
int main(){
    int even[] = {1, 2, 3, 4, 3, 3, 3, 3, 3, 5, 56, 7};


    cout << "first occurence is "<< firstOcc(even, 12, 3)<<endl;
    cout << "last occurence is "<< lastOcc(even, 12, 3) << endl;
    return 0;
}