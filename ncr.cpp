#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int fact = n * factorial(n-1);
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);

    int ans = num/denom;
    return ans;
}
int main(){
    int n, r;
    cout << "enter the value of na and r";
    cin>> n>> r;

    cout << "ncr is: "<< nCr(n, r);

}