#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cout<< "Enter size of array"<<endl;
    cin >> n ;
    vector<int> arr(n);
    cout << endl;
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        
    }
    cout<<endl;
    cout <<"Calculating Majority Elements" <<endl;
    int val1 = arr[0];
    int count1 = 1;
    int val2 = arr[0];
    int count2 = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] == val1)
        {
            count1++;
        }
        else if(arr[i] == val2)
        {
            count2++;
        }
        else if(count1 == 0)
        {
            count1 =1;
            val1 = arr[i];
        }
        else if(count2 == 0)
        {
            count2 =1;
            val2 = arr[i];
        }
        else {
            count1--;
            count2--;
        }
    }
    //check for ans
    vector<int> ans;
    int c1=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == val1)
        {
            c1++;
        }
    }
    if(c1 > n/3)
    {
        ans.push_back(val1);
    }
    
    int c2 =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == val2)
        {
            c2++;
        }
    }
    if(c2 > n/3)
    {
       ans.push_back(val2); 
    }
    
    cout << "Majority element is "<<endl;
    for(int i=0; i<ans.size();i++)
    {
        cout <<ans[i] <<" ";
    }
    return 0;
}