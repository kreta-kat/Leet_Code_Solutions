// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string s)
{
    int sp = 0;
    int ep = s.length() - 1;
    while(sp < ep)
    {
        if(s[sp] != s[ep])
        {return false;}
        sp++;
        ep--;
    }
    return true;
}

int main() {
    string s;
    cout <<"Enter String"<<endl;
    getline(cin,s);
    //to convert into upper
    for(int i=0; i<s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    cout << (isPalindrome(s) ? "Yes" : "No");
    return 0;
}