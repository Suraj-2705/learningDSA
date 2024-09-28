#include<iostream>
using namespace std;
int getLength(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}
char toLowerCase(char str){
    if(str >='a' && str<= 'z'){
        return str;
    }else{
        char temp = str - 'A' + 'a';
        return temp;
    }
}

 bool checkPalindrome(char str[], int n){
        int s = 0;
        int e = n - 1;
        while(s < e){
            if(toLowerCase(str[s]) != toLowerCase(str[e])){
                return 0;
            }
            else{
                s++;
                e--;
            }
    }
    return 1;
}

void reverse(char str[], int n){
        int s = 0;
        int e = n - 1;
        while(s < e){
            swap(str[s++], str[e--]);
    }
    }
int main(){
    char str[20];
    cout<<"Enter a string: ";
    cin>>str;
    int len = getLength(str);
    cout << "length is: " << len << endl;

    reverse(str, len);
    cout << "string is ";
    cout << str << endl;

    cout << "palindrome or not: " << checkPalindrome(str, len)<<endl;

}