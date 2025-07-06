#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool find_element(vector<int> &arr,int start_idx, int n, int no)
{
    for(int i =start_idx; i<n; i++)
    {
        if(arr[i] == no)
        {return true;}
    }
    return false;
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter input for array"<<endl;
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout<<"Enter Sum "<< endl;
    cin >> sum; 
    
    for(int i=0; i<n; i++)
    {
        if(find_element(arr, i+1, n, sum-arr[i]))
        {
            cout<<"Yes there exists"<<endl;
            return 0;
        }
    }
    cout<<"No there doesn't exist";
    return 0;

    //Approach 2 Direct Approach 
}

bool two_sum(vector<int> &arr, int sum)
{
    for(int i =0; i<arr.size()-1; i++)
    {
        for(int j = i+1; j<arr.size(); j++)
        {
            if(arr[i] + arr[j] == sum)
            {return true;}
        }
    }
    return false;
}

int main() {
    int n;
    cout<< "Enter size of array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter input for array"<<endl;
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cout<<"Enter Sum "<< endl;
    cin >> sum; 
    
    cout << (two_sum(arr,sum)?"Yes there exists" : "No there doesn't exist");
     
     return 0;
}
