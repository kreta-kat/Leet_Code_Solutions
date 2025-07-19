#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void toggleString(string &s)
{
    for(int i =0; i<s.length(); i++)
    {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
          s[i] = s[i] - 32;
      }
      else if(s[i] >= 'A' && s[i] <= 'Z')
      {
          s[i] = s[i] + 32;
      }
      
    }
    
    cout <<s;
}

void toggleString(string &s)
{
    for(char &c: s)
    {
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)) {
            c = tolower(c);
        }
    }
    
    cout <<s;
}

int main() {
    
    string s;
    cout << "Enter string" <<endl;
    getline(cin, s);
    cout << endl;
    toggleString(s);
    
    return 0;
}
