#include<iostream>
using namespace std;

int reverseNum(int num){
    int rev = 0;
    while(num != 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main(){
    int num,reversed = 0;
    cout << "Enter a number :";
    cin >> num;
   cout << "reversed no is " << reverseNum(num) << endl;
    return 0;
}