#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    char input[1000];
    strcpy(input, str);
    reverse(str.begin(), str.end());
    
    if(strcmp(input, str)) return true;
    else false;
    
}

int main(int argc, char const *argv[])
{
    string str = "abcba";
    cout << isPalindrome(str) << endl;
    return 0;
}
