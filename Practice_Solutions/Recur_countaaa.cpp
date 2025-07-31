#include <iostream>
#include <string>

using namespace std;

int countaaa1(string str, int idx)
{
    if(idx >= str.length() - 2)
    {
        return 0;
    }
    
    if(str[idx] == 'a' && str[idx+1] == 'a' && str[idx+2] == 'a')
    {
        int temp = countaaa1(str,idx+1);
        return temp+1;
    }
    else
    {
        int temp = countaaa1(str,idx+1);
        return temp;
    }
}
int countaaa2(string str, int idx)
{
    if(idx >= str.length() -2)
    {
        return 0;
    }
    
    if(str[idx] == 'a' && str[idx+1] == 'a' && str[idx+2] == 'a')
    {
        int temp = countaaa2(str, idx+3);
        return temp+1;   
        }
        else {
           int temp = countaaa2(str, idx+1); 
           return temp;
        }
}

int main() {
    string str;
    cout << "Enter String to count aaa"<<endl;
    getline(cin,str);
    
    int ans1 = countaaa1(str,0);
    int ans2 = countaaa2(str,0);
    cout << "aaa count using OVERLAP " << ans1 << endl;
    cout << "aaa count  WITHOUT OVERLAP " << anaas2 << endl;
    
    return 0;
}