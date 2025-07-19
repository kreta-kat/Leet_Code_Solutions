#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

string reverseString(string &s)
{
     char *ch_array = new char[s.length() + 1];
     strcpy(ch_array, s.c_str());
     
     int n = s.length();
     for(int i =0; i<n/2; i++)
     {
         swap(ch_array[i] , ch_array[n-1 -i]);
     }
    string t(ch_array);
    
    delete[] ch_array;
    
    return t;
}

int main() {
    
    string s;
    cout << "Enter string" <<endl;
    getline(cin, s);
    cout << endl;
    cout << reverseString(s);
    
    return 0;
}
