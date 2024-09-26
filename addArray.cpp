#include <iostream>
#include <vector>

using namespace std;

// Function declarations
vector<int> reverse(vector<int> v);
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m);

vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
     // second case
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //print(ans);
    return reverse(ans);
}


int main() {
    // Example input arrays
    vector<int> a = {9, 9, 9}; // Representing number 999
    vector<int> b = {1};       // Representing number 1
    
    // Find sizes of the arrays
    int n = a.size();
    int m = b.size();
    
    // Call the function to find the sum of the two arrays
    vector<int> result = findArraySum(a, n, b, m);
    
    // Output the result
    cout << "Sum of the two arrays is: ";
    for(int num : result) {
        cout << num;
    }
    cout << endl;
    
    return 0;
}