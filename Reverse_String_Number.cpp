#include<iostream>

using namespace std;

int reverse(int num){
    int rev = 0;
    while(num > 0){
        rev = rev*10 + num%10;
        num /= 10;
    }
    return rev;
}

string reverse(string& str){
    int n = str.length();
    for (int i = 0; i < n/2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

bool isPallindrome(string str){
    if (str == reverse(str))
        return true;
    return false;
}

bool isPallindrome(int num){
    if (num == reverse(num))
        return true;
    return false;
}

int isPrime(int num){
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++)
        if(num%i == 0)
            return false;

    return true;
}

int isLeapYear(int year){
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    return false;
}

int main(){
    // // Reverse a String
    // string str = "abcdefghijklmnopqrstuvwxyz";
    // cout << reverse(str);

    // // Reverse a number
    // int num = 123456789;
    // cout << reverse(num);

    // // Pallindrome
    // cout << isPallindrome("abcba");
    // cout << isPallindrome(12321);

    // // Prime Number
    // isPrime(11) ? cout << "True\n" : cout << "False\n";

    // // Leap Year
    // isLeapYear(2000) ? cout << "True\n" : cout << "False\n";

    // // Greatest among 10 numbers
    // int arr[10] = {2, 53, 65, 3, 88, 8, 14, 5, 77, 64};
    // for (int i = 1; i < 10; i++)
    //     if (arr[0] < arr[i])
    //         arr[0] = arr[i];
    // cout << arr[0] << endl;

    // Fibonacci Series
    
    return 0;
}