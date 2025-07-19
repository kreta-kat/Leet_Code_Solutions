#include <iostream>
#include <string>

using namespace std;

string insert(string s)
{
    int n = s.length();
    string ans;
    for(int i =0; i<n-1; i++)
    {
        ans = ans + s[i];
        int temp = s[i+1] - s[i];
        ans = ans + to_string(temp);
    }
    
    ans = ans+s[n-1];
    return ans;
}

int main() {
    string s;
    cout <<"Enter String"<<endl;
    getline(cin,s);
    cout << insert(s);
    return 0;
}