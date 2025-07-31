#include <iostream>
#include <string>

using namespace std;

bool isPalin(string str, int sp, int ep)
{
    if(sp > ep)
    {
        return true;
    }
    if(str[sp] == str[ep])
    {
        return isPalin(str, sp+1, ep-1);
    }
    else
    {
        return false;
    }
}

int main() {
    string str;
    cout << "Enter String to check if it is Palindrome"<<endl;
    getline(cin,str);
    
    cout << (isPalin(str, 0, str.length() - 1 ) ? "Yes it is palindrome": "No it is not");
    
    return 0;
}