#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0;
    int mainNum = n;
    while (n != 1) {
        int digit = n%10;
        if(digit != 0 && mainNum % digit == 0){
            count++;
        }

        n=n/10;
    }
    cout << count;
}