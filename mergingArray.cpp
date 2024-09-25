#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while (i < n && j < m){
        if(arr1[i]<arr2[j]){
        arr3[k++] = arr1[i++];
        }

        else {
            arr3[k++] = arr2[j++];
        }
    }
    // copy element of first array
    while(i < n){
        arr3[k++] = arr1[i++];
    }
    //copy element of second array
    while(j < m){
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int n){
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int arr1[5] = {2, 3, 4, 5, 6};
    int arr2[7] = {1, 7, 8, 9, 10, 11, 12};
    int arr3[12] = {0};

    merge(arr1, 5, arr2, 7, arr3);
    cout << "merged array is: " << endl;
    print(arr3, 12);

    return 0;
}