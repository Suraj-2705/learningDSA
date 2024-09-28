#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    void reverseString(vector<char>& arr) {
        int start=0;
        int end = arr.size()-1;

        while(start<end) {
            swap(arr[st++], arr[e--]);
        }
    }
};