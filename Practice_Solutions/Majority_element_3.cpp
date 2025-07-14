#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>

using namespace std;

int main() {
    int n;
    cout<< "Enter number"<<endl;
    cin >> n ;
    //convert to string
    string strNum = to_string(n);
    int m = strNum.length();
    cout<<endl;
    int index = -1;
    //index find just greater to be replaced
    for(int i = m-2; i>=0; i--)
    {
        if(strNum[i] < strNum[i+1])
        {
            index = i;
            break;
        }
    }
    
    if(index == -1)
    {
        cout << -1 << endl;
        return -1;
    }
    //find smallest possible to swap
    char val = strNum[index];
    int smallest = index+1;
    for(int i = index+1; i<m; i++)
    {
        if(strNum[i] > val && strNum[smallest] >= strNum[i])
        {
            smallest = i;
        }
    }
    //swap 
    swap(strNum[index],strNum[smallest]);
    //reverse the last items
    sort(strNum.begin() + index+1, strNum.end());
    
    long long ans = stoll(strNum);
    if(ans > INT_MAX)
    {
        cout <<"Can't be printed";
        return -1;
    }  
    else
    {
        int result = (int)ans;
        cout<< result;
    }
    return 0;
}